#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::GfxConfig
    @brief central configuration constants of the Gfx module
*/
#include "Core/Types.h"

namespace Oryol {

class GfxConfig {
public:
    /// default resource pool size
    static const int DefaultResourcePoolSize = 128;
    /// default uniform buffer size (only relevant on some platforms)
    static const int DefaultGlobalUniformBufferSize = 4 * 1024 * 1024;
    /// default maximum number of draw-calls per frame (only relevant on some platforms)
    static const int DefaultMaxDrawCallsPerFrame = (1<<16);
    /// default maximum number of Gfx::ApplyDrawState per frame (only relevant on some platforms)
    static const int DefaultMaxApplyDrawStatesPerFrame = 4096;
    /// max number of input meshes
    static const int MaxNumInputMeshes = 4;
    /// maximum number of primitive groups for one mesh
    static const int MaxNumPrimGroups = 8;
    /// max number of uniform blocks per stage
    static const int MaxNumUniformBlocksPerStage = 4;
    /// maximum number of textures on vertex shader stage
    static const int MaxNumVertexTextures = 4;
    /// maximum number of textures on fragment shader stage
    static const int MaxNumFragmentTextures = 12;
    /// max number of textures on any stage
    static const int MaxNumShaderTextures = MaxNumVertexTextures>MaxNumFragmentTextures?MaxNumVertexTextures:MaxNumFragmentTextures;
    /// max number of texture faces
    static const int MaxNumTextureFaces = 6;
    /// max number of texture mipmaps
    static const int MaxNumTextureMipMaps = 12;
    /// maximum number of components in uniform block layout
    static const int MaxNumUniformBlockLayoutComponents = 16;
    /// maximum number of components in texture block layout
    static const int MaxNumTextureBlockLayoutComponents = 16;
    /// maximum number of components in vertex layout
    static const int MaxNumVertexLayoutComponents = 16;
    /// maximum number of in-flight frames for Metal
    static const int MtlMaxInflightFrames = 2;
};

} // namespace Oryol
