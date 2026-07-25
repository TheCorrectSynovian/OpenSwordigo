/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6FA0
 * Mangled: ._ZNK5Caver6Camera16ForwardDirectionEv
 * Demangled: Caver::Camera::ForwardDirection(void)
 *
 * Callers: 2
 *   0x000000000021DED4  Caver::BackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x00000000002B6760  Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *
 * Callees: 1
 *   0x00000000004571BC  Caver::Camera::ForwardDirection(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6FA8 string=0x00000000001F6FAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::ForwardDirection(Caver::Camera *this)
{
  return _ZNK5Caver6Camera16ForwardDirectionEv(this);
}

