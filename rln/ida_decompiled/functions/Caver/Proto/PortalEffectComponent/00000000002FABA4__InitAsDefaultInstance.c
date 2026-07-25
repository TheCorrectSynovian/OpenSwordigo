/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FABA4
 * Mangled: _ZN5Caver5Proto21PortalEffectComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::PortalEffectComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002FABB4 string=0x00000000002FABB8 "`"
 *   insn=0x00000000002FABB4 string=0x00000000001F6310 "0'"
 *   insn=0x00000000002FABBC string=0x00000000002FABC0 "`"
 *   insn=0x00000000002FABBC string=0x00000000001FD230 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalEffectComponent::InitAsDefaultInstance(
        Caver::Proto::PortalEffectComponent *this)
{
  Caver::Proto::Vector3 *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Vector3 *)Caver::Proto::FloatColor::default_instance(this);
  *((_QWORD *)this + 3) = v2;
  result = Caver::Proto::Vector3::default_instance(v2);
  *((_QWORD *)this + 4) = result;
  return result;
}

