/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203620
 * Mangled: ._ZN5Caver16RenderingContext8FillRectERKNS_9RectangleERKNS_5ColorEf
 * Demangled: Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Callers: 11
 *   0x00000000002716C4  Caver::HealthComponent::DrawHealthBar(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000037226C  Caver::SceneView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000404A8C  Caver::GuidePurchaseView::AnimateIn(void)
 *   0x0000000000478CE8  Java_com_touchfoo_swordigo_Native_drawApplication
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004987E8  Caver::GUILoadingView::GUILoadingView(void)
 *   0x000000000049CD40  Caver::GUISlider::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A735C  Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *   0x00000000004B9CB0  Caver::GUITextFieldImpl::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x000000000048C6A0  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203628 string=0x000000000020362C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::FillRect(
        Caver::RenderingContext *this,
        const Caver::Rectangle *a2,
        const Caver::Color *a3,
        float a4)
{
  return _ZN5Caver16RenderingContext8FillRectERKNS_9RectangleERKNS_5ColorEf(this, a2, a3, a4);
}

