/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFED0
 * Mangled: ._ZN5Caver16RenderingContext8DrawRectERKNS_9RectangleERKNS_5ColorEf
 * Demangled: Caver::RenderingContext::DrawRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048C9F8  Caver::RenderingContext::DrawRect(Caver::Rectangle const&,Caver::Color const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFED8 string=0x00000000001FFEDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::DrawRect(
        Caver::RenderingContext *this,
        const Caver::Rectangle *a2,
        const Caver::Color *a3,
        float a4)
{
  return _ZN5Caver16RenderingContext8DrawRectERKNS_9RectangleERKNS_5ColorEf(this, a2, a3, a4);
}

