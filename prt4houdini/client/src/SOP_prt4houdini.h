#pragma once

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wattributes"
#include "SOP/SOP_Node.h"
#pragma GCC diagnostic pop


namespace prt {
class CacheObject;
class AttributeMap;
class ResolveMap;
}


namespace prt4hdn {


class SOP_PRT : public SOP_Node {
public:
	static OP_Node* myConstructor(OP_Network*, const char*, OP_Operator*);

public:
	SOP_PRT(OP_Network *net, const char *name, OP_Operator *op);
	virtual ~SOP_PRT();

protected:
	virtual OP_ERROR cookMySop(OP_Context &context);
	virtual bool updateParmsFlags();

private:
	void createInitialShape(const GA_Group* group, void* ctx);
	bool handleParams(OP_Context &context);
	void updateRuleAttributeParams(const std::vector<PRM_Template>& parmTemplates);

private:
	prt::CacheObject* mPRTCache;
	const prt::ResolveMap* mAssetsMap;

	std::wstring mRPKURI;
	std::wstring mRuleFile;
	std::wstring mStartRule; // fixed per rpk for now

	std::vector<PRM_Name> parmNames;
	std::vector<PRM_Template> parmTemplates;

	const prt::AttributeMap* mHoudiniEncoderOptions;;
	const prt::AttributeMap* mCGAPrintOptions;
	const prt::AttributeMap* mCGAErrorOptions;
	std::vector<const wchar_t*> mAllEncoders;
	std::vector<const prt::AttributeMap*> mAllEncoderOptions;
};


} // namespace prt4hdn