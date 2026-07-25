/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032D0FC
 * Mangled: _ZNK5Caver5Proto15PortalComponent3NewEv
 * Demangled: Caver::Proto::PortalComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 9
 *   insn=0x000000000032D104 string=0x000000000032D108 "6!"
 *   insn=0x000000000032D108 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032D10C string=0x000000000032D110 ""
 *   insn=0x000000000032D118 string=0x000000000032D11C ")5E"
 *   insn=0x000000000032D120 string=0x000000000032D124 "JQA"
 *   insn=0x000000000032D124 string=0x000000000032D128 "A"
 *   insn=0x000000000032D128 string=0x000000000032D12C " "
 *   insn=0x000000000032D130 string=0x000000000032D134 "@"
 *   insn=0x000000000032D134 string=0x000000000032D138 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::PortalComponent::New(Caver::Proto::PortalComponent *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x28u);
  v1->n128_u64[1] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::PortalComponent::_default_destination_scene_name_;
  v1[2].n128_u8[0] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::PortalComponent::_default_spawn_point_name_;
  v1->n128_u64[0] = (unsigned __int64)off_6C9360;
  v1[1] = result;
  v1[2].n128_u32[1] = 0;
  return result;
}

