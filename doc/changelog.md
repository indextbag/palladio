# Palladio ChangeLog

## v1.2.0-rc.1 (Jun 11, 2018)
* Support for inter-shape occlusion queries (#33).

## v1.1.1 (Apr 16, 2018)
* Fixed asset loading issues in Windows build (#88).

## v1.1 (Apr 7, 2018)
* Added support for Windows (#85).
* Raised minimal Houdini version to 16.5.x (#85).
* Added support to reload RPKs (#58).

## v1.0 (Jan 26, 2018)
* Renamed project to "Palladio" (#68).
* Updated documentation (#38).
* Published demo scene (#74).

## v0.9 (Jan 18, 2018)
* Add support for writing out primitive attributes from rule/generic CGA attributes (#40).
* Removed random seed parameter UI, read it from incoming primitive attributes instead. Added centroid-based random seed as fallback.
* Correctly update assign node parameters from RPK (#62).
* Make primitive group creation optional and based on primitive classifier (#67).
* Add support for CityEngine network licensing (#41).
* Fixed crash when handling invalid RPK paths.
* Remove style prefix on primitive attribute names.

## v0.8 (Dec 19, 2017)
* Added support for multiple UV sets (#36).
* Added support for CGA reports (#39).
* Properly use Houdini input mesh connectivity (make CGA operation "isClosedSurface" work correctly) (#49).
* Refactored assign node to correctly use incoming geometry to evaluate default rule attribute values.

## v0.7.1 (Nov 27, 2017)
* Proper support for UVs and material attributes.
* Introduced Conan to handle 3rd party packages in the build system (Houdini, CityEngine).
* Updated to CityEngine SDK 2017.1 (CE SDK 1.9).

## v0.7 (Sep 19, 2017)
* Split plugin into two SOPs ("assign" and "generate") to support proper evaluation of rule attribute default values.
* Abandoned rule param UI, purely rely on Houdini attribute tools (e.g. "AttributeCreate") to create/modify rule attributes (= no need for complicated UI on assign node).
* Updated to Houdini 16 and CityEngine 2017.
* Dropped Windows/macOS support temporarily.

## v0.6 (Mar 15, 2016)
* Support for rule attribute UI via Houdini multi-parameter.
* Experimental support for Windows/macOS.
* Updated to Houdini 15 and CityEngine 2016.

## v0.4 (Oct 22, 2015)
* Working geometry generation from CityEngine rule packages
* Support to read rule attributes from primitive attributes
* Implemented rule execution as single surface operator (SOP).
* Updated to Houdini 13 and CityEngine 2015.

## v0.1 - v0.3 (Spring 2015)
* Early experiments with Houdini 12 and CityEngine 2014.
