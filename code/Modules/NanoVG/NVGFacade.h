#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::NanoVG::NVGFacade
    @brief nanovg initialization and resource management wrapper
*/
#include "Core/Types.h"
#include "Core/Singleton.h"
#include "Core/Ptr.h"
#include "IO/Stream/Stream.h"
#include "Core/Containers/Map.h"

struct NVGcontext;

namespace Oryol {
namespace NanoVG {
    
class NVGFacade {
    OryolLocalSingletonDecl(NVGFacade);
public:
    /// constructor
    NVGFacade();
    /// destructor
    ~NVGFacade();
    
    /// create nanovg context
    NVGcontext* CreateContext(int flags);
    /// destroy nanovg context
    void DeleteContext(NVGcontext* ctx);
    /// synchronously create nanovg image (image file must be preloaded into stream)
    int CreateImage(NVGcontext* ctx, const Core::Ptr<IO::Stream>& fileData, int imageFlags);
    /// delete image
    void DeleteImage(NVGcontext* ctx, int imgHandle);
    /// synchronously create nanovg font (font file must be preloaded into stream)
    int CreateFont(NVGcontext* ctx, const char* name, const Core::Ptr<IO::Stream>& fileData);
    /// delete font
    void DeleteFont(NVGcontext* ctx, int fontHandle);

    /// begin nanovg rendering
    void BeginFrame(NVGcontext* ctx);
    /// end nanovg rendering
    void EndFrame(NVGcontext* ctx);
    
private:
    Core::Map<int, Core::Ptr<IO::Stream>> fontStreams;
};
    
} // namespace NanoVG
} // namespace Oryol
