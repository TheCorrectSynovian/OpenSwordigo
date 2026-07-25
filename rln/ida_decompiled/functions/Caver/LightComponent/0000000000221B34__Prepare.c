/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221B34
 * Mangled: _ZN5Caver14LightComponent7PrepareEv
 * Demangled: Caver::LightComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F81D0  Caver::SceneObject::SetAlwaysActive(bool)
 *   0x0000000000200E70  Caver::LightComponent::RegisterLibrary(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000221B44 string=0x0000000000221B48 "hr@"
 *   insn=0x0000000000221B4C string=0x0000000000221B50 "h"
 *   insn=0x0000000000221B54 string=0x0000000000221B58 "(!"
 *   insn=0x0000000000221B64 string=0x0000000000221B68 "`"
 *   insn=0x0000000000221B78 string=0x00000000001F81D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LightComponent::Prepare(Caver::SceneObject **this)
{
  unsigned int v2; // w8

  Caver::LightComponent::RegisterLibrary((Caver::LightComponent *)this);
  v2 = *((_DWORD *)this + 28);
  if ( v2 <= 4 && ((1 << v2) & 0x16) != 0 )
    Caver::SceneObject::SetAlwaysActive(this[5]);
}

