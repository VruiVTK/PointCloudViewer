#ifndef BASELOCATOR_H_
#define BASELOCATOR_H_

/* Vrui includes */
#include <Vrui/LocatorToolAdapter.h>

// begin Forward Declarations
namespace Vrui {
class LocatorTool;
}
class PointCloudViewer;
// end Forward Declarations
class BaseLocator : public Vrui::LocatorToolAdapter {
public:
	BaseLocator(Vrui::LocatorTool* _locatorTool, PointCloudViewer* _application);
	~BaseLocator();
	virtual void highlightLocator(GLContextData& contextData) const;
	virtual void glRenderAction(GLContextData& contextData) const;
	virtual void glRenderActionTransparent(GLContextData& contextData) const;
  virtual void getName(std::string& name) const; // Returns a descriptive name for the tool adapter
private:
	PointCloudViewer* application;
};

#endif /*BASELOCATOR_H_*/
