/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9D3C
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD230  Caver::Proto::Vector3::default_instance(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000002F9D48 string=0x00000000002F9D4C "9"
 *   insn=0x00000000002F9D4C string=0x00000000002F9D50 "`"
 *   insn=0x00000000002F9D4C string=0x00000000001FD230 "0'"
 *   insn=0x00000000002F9D50 string=0x00000000002F9D54 "7"
 *   insn=0x00000000002F9D54 string=0x00000000002F9D58 "`"
 *   insn=0x00000000002F9D58 string=0x00000000002F9D5C "5"
 *   insn=0x00000000002F9D5C string=0x00000000002F9D60 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLinkControllerComponent::InitAsDefaultInstance(
        Caver::Proto::ObjectLinkControllerComponent *this)
{
  Caver::Proto::Vector3 *v2; // x0
  Caver::Proto::Vector3 *v3; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Vector3 *)Caver::Proto::Vector3::default_instance(this);
  *((_QWORD *)this + 4) = v2;
  v3 = (Caver::Proto::Vector3 *)Caver::Proto::Vector3::default_instance(v2);
  *((_QWORD *)this + 5) = v3;
  result = Caver::Proto::Vector3::default_instance(v3);
  *((_QWORD *)this + 6) = result;
  return result;
}

