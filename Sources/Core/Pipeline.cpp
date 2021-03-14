#include <Core/Pipeline.h>

namespace sr
{
   void Pipeline::ResetPipeline()
   {
      m_vertexShader = nullptr;
      m_pixelShader = nullptr;
      m_viewport = nullptr;
   }

   void Pipeline::Draw(const std::optional<Mesh*>& mesh)
   {
      if (mesh)
      {
      }
   }
}