/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030EF24
 * Mangled: _ZNK5Caver5Proto29ObjectLinkControllerComponent3NewEv
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x000000000030EF30 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000030EF34 string=0x000000000030EF38 "M@"
 *   insn=0x000000000030EF40 string=0x000000000030EF44 ")"
 *   insn=0x000000000030EF48 string=0x000000000030EF4C "J"
 *   insn=0x000000000030EF4C string=0x000000000030EF50 "A"
 *   insn=0x000000000030EF50 string=0x000000000030EF54 " "
 *   insn=0x000000000030EF58 string=0x000000000030EF5C "@"
 *   insn=0x000000000030EF60 string=0x000000000030EF64 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::ObjectLinkControllerComponent::New(Caver::Proto::ObjectLinkControllerComponent *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x40u);
  v1->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::ObjectLinkControllerComponent::_default_target_object_identifier_;
  v1[2].n128_u64[1] = 0;
  v1[3].n128_u64[0] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::ObjectLinkControllerComponent::_default_target_bone_identifier_;
  v1[2].n128_u64[0] = 0;
  v1->n128_u64[0] = (unsigned __int64)off_6C7C68;
  v1[1] = result;
  v1[3].n128_u32[2] = 0;
  return result;
}

