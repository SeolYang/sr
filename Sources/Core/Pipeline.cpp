#include <Core/Pipeline.h>

namespace sr
{
   void Pipeline::ResetPipeline()
   {
      m_vertexShader = nullptr;
      m_pixelShader = nullptr;
      m_viewport = nullptr;
   }
}