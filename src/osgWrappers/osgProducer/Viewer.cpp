// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/AnimationPath>
#include <osg/ApplicationUsage>
#include <osg/ArgumentParser>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Quat>
#include <osg/RefNodePath>
#include <osg/Vec3>
#include <osgGA/EventVisitor>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/MatrixManipulator>
#include <osgProducer/KeyboardMouseCallback>
#include <osgProducer/OsgCameraGroup>
#include <osgProducer/Viewer>
#include <osgUtil/IntersectVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgGA::GUIEventHandler > >, osgProducer::Viewer::EventHandlerList);

BEGIN_ENUM_REFLECTOR(osgProducer::Viewer::ViewerOptions)
	I_EnumLabel(osgProducer::Viewer::NO_EVENT_HANDLERS);
	I_EnumLabel(osgProducer::Viewer::TRACKBALL_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::DRIVE_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::FLIGHT_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::TERRAIN_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::UFO_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::STATE_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::HEAD_LIGHT_SOURCE);
	I_EnumLabel(osgProducer::Viewer::SKY_LIGHT_SOURCE);
	I_EnumLabel(osgProducer::Viewer::STATS_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::VIEWER_MANIPULATOR);
	I_EnumLabel(osgProducer::Viewer::ESCAPE_SETS_DONE);
	I_EnumLabel(osgProducer::Viewer::STANDARD_SETTINGS);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgProducer::Viewer)
	I_BaseType(osgProducer::OsgCameraGroup);
	I_BaseType(osgGA::GUIActionAdapter);
	I_Constructor0();
	I_Constructor1(IN, Producer::CameraConfig *, cfg);
	I_Constructor1(IN, const std::string &, configFile);
	I_Constructor1(IN, osg::ArgumentParser &, arguments);
	I_MethodWithDefaults1(void, setUpViewer, IN, unsigned int, options, osgProducer::Viewer::STANDARD_SETTINGS);
	I_Method1(void, setDoneAtElapsedTime, IN, double, elapsedTime);
	I_Method0(double, getDoneAtElapsedTime);
	I_Method1(void, setDoneAtElapsedTimeEnabled, IN, bool, enabled);
	I_Method0(bool, getDoneAtElapsedTimeEnabled);
	I_Method1(void, setDoneAtFrameNumber, IN, unsigned int, frameNumber);
	I_Method0(unsigned int, getDoneAtFrameNumber);
	I_Method1(void, setDoneAtFrameNumberEnabled, IN, bool, enabled);
	I_Method0(bool, getDoneAtFrameNumberEnabled);
	I_Method1(void, setDone, IN, bool, done);
	I_Method0(bool, getDone);
	I_Method0(bool, done);
	I_Method1(void, setWriteImageWhenDone, IN, bool, enabled);
	I_Method0(bool, getWriteImageWhenDone);
	I_Method1(void, setWriteImageFileName, IN, const std::string &, filename);
	I_Method0(const std::string &, getWriteImageFileName);
	I_Method1(void, setViewByMatrix, IN, const Producer::Matrix &, pm);
	I_Method1(bool, realize, IN, osgProducer::OsgCameraGroup::ThreadingModel, thread_model);
	I_Method0(bool, realize);
	I_Method0(void, update);
	I_Method1(void, setUpdateVisitor, IN, osg::NodeVisitor *, nv);
	I_Method0(osg::NodeVisitor *, getUpdateVisitor);
	I_Method0(const osg::NodeVisitor *, getUpdateVisitor);
	I_Method1(void, setEventVisitor, IN, osgGA::EventVisitor *, nv);
	I_Method0(osgGA::EventVisitor *, getEventVisitor);
	I_Method0(const osgGA::EventVisitor *, getEventVisitor);
	I_Method0(void, computeActiveCoordinateSystemNodePath);
	I_Method1(void, setCoordinateSystemNodePath, IN, const osg::RefNodePath &, nodePath);
	I_Method1(void, setCoordinateSystemNodePath, IN, const osg::NodePath &, nodePath);
	I_Method0(const osg::RefNodePath &, getCoordinateSystemNodePath);
	I_Method0(void, frame);
	I_Method0(void, requestRedraw);
	I_Method1(void, requestContinuousUpdate, IN, bool, x);
	I_Method2(void, requestWarpPointer, IN, float, x, IN, float, y);
	I_Method5(bool, computePixelCoords, IN, float, x, IN, float, y, IN, unsigned int, cameraNum, IN, float &, pixel_x, IN, float &, pixel_y);
	I_Method5(bool, computeNearFarPoints, IN, float, x, IN, float, y, IN, unsigned int, cameraNum, IN, osg::Vec3 &, near, IN, osg::Vec3 &, far);
	I_MethodWithDefaults6(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, unsigned int, cameraNum, , IN, osg::Node *, node, , IN, osgUtil::IntersectVisitor::HitList &, hits, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff);
	I_MethodWithDefaults5(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, unsigned int, cameraNum, , IN, osgUtil::IntersectVisitor::HitList &, hits, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff);
	I_MethodWithDefaults5(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, osg::Node *, node, , IN, osgUtil::IntersectVisitor::HitList &, hits, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff);
	I_MethodWithDefaults4(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, osgUtil::IntersectVisitor::HitList &, hits, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff);
	I_Method1(void, setKeyboardMouse, IN, Producer::KeyboardMouse *, kbm);
	I_Method0(Producer::KeyboardMouse *, getKeyboardMouse);
	I_Method0(const Producer::KeyboardMouse *, getKeyboardMouse);
	I_Method1(void, setKeyboardMouseCallback, IN, osgProducer::KeyboardMouseCallback *, kbmcb);
	I_Method0(osgProducer::KeyboardMouseCallback *, getKeyboardMouseCallback);
	I_Method0(const osgProducer::KeyboardMouseCallback *, getKeyboardMouseCallback);
	I_Method0(osgProducer::Viewer::EventHandlerList &, getEventHandlerList);
	I_Method0(const osgProducer::Viewer::EventHandlerList &, getEventHandlerList);
	I_Method0(osgGA::KeySwitchMatrixManipulator *, getKeySwitchMatrixManipulator);
	I_Method0(const osgGA::KeySwitchMatrixManipulator *, getKeySwitchMatrixManipulator);
	I_Method1(unsigned int, addCameraManipulator, IN, osgGA::MatrixManipulator *, cm);
	I_Method1(void, selectCameraManipulator, IN, unsigned int, no);
	I_Method1(void, getCameraManipulatorNameList, IN, std::list< std::string > &, nameList);
	I_Method1(bool, selectCameraManipulatorByName, IN, const std::string &, name);
	I_Method1(osgGA::MatrixManipulator *, getCameraManipulatorByName, IN, const std::string &, name);
	I_Method1(void, setRecordingAnimationPath, IN, bool, on);
	I_Method0(bool, getRecordingAnimationPath);
	I_Method1(void, setAnimationPath, IN, osg::AnimationPath *, path);
	I_Method0(osg::AnimationPath *, getAnimationPath);
	I_Method0(const osg::AnimationPath *, getAnimationPath);
	I_Method0(const double *, getPosition);
	I_Method0(double, getSpeed);
	I_Method0(osg::Quat, getOrientation);
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage);
	I_Method0(void, updatedSceneData);
	I_Property(osg::AnimationPath *, AnimationPath);
	I_Property(const osg::RefNodePath &, CoordinateSystemNodePath);
	I_Property(bool, Done);
	I_Property(double, DoneAtElapsedTime);
	I_Property(bool, DoneAtElapsedTimeEnabled);
	I_Property(unsigned int, DoneAtFrameNumber);
	I_Property(bool, DoneAtFrameNumberEnabled);
	I_ReadOnlyProperty(osgProducer::Viewer::EventHandlerList &, EventHandlerList);
	I_Property(osgGA::EventVisitor *, EventVisitor);
	I_ReadOnlyProperty(osgGA::KeySwitchMatrixManipulator *, KeySwitchMatrixManipulator);
	I_Property(Producer::KeyboardMouse *, KeyboardMouse);
	I_Property(osgProducer::KeyboardMouseCallback *, KeyboardMouseCallback);
	I_ReadOnlyProperty(osg::Quat, Orientation);
	I_ReadOnlyProperty(const double *, Position);
	I_Property(bool, RecordingAnimationPath);
	I_ReadOnlyProperty(double, Speed);
	I_WriteOnlyProperty(unsigned int, UpViewer);
	I_Property(osg::NodeVisitor *, UpdateVisitor);
	I_WriteOnlyProperty(const Producer::Matrix &, ViewByMatrix);
	I_Property(const std::string &, WriteImageFileName);
	I_Property(bool, WriteImageWhenDone);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osgGA::GUIEventHandler > >);

STD_LIST_REFLECTOR(std::list< std::string >);

