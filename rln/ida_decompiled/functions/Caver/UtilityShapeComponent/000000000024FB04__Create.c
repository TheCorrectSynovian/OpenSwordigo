/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FB04
 * Mangled: _ZN5Caver21UtilityShapeComponent6CreateEv
 * Demangled: Caver::UtilityShapeComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FAC4  Caver::TextureMappingComponent::Create(void)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA8A0  Caver::ShapeComponent::ShapeComponent(void)
 *   0x00000000001FBC40  .memset
 *   0x000000000024FB78  Caver::CollisionShapeComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000024FB14 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FB20 string=0x000000000024FB24 "G"
 *   insn=0x000000000024FB24 string=0x00000000001FBC40 "0'"
 *   insn=0x000000000024FB28 string=0x000000000024FB2C "]"
 *   insn=0x000000000024FB2C string=0x00000000001FA8A0 "0'"
 *   insn=0x000000000024FB30 string=0x000000000024FB34 ""
 *   insn=0x000000000024FB3C string=0x000000000024FB40 "\n!"
 *   insn=0x000000000024FB40 string=0x000000000024FB44 "\tA"
 *   insn=0x000000000024FB44 string=0x000000000024FB48 "@"
 *   insn=0x000000000024FB48 string=0x000000000024FB4C "!"
 *   insn=0x000000000024FB50 string=0x000000000024FB54 "i"
 *   insn=0x000000000024FB54 string=0x000000000024FB58 "`"
 *   insn=0x000000000024FB6C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FB70 string=0x000000000024FB74 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::UtilityShapeComponent::Create(Caver::UtilityShapeComponent *this)
{
  __n128 *v1; // x19
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x88u);
  memset(v1, 0, 0x88u);
  Caver::ShapeComponent::ShapeComponent((Caver::ShapeComponent *)v1);
  result.n128_u64[0] = (unsigned __int64)&off_6BCB90;
  result.n128_u64[1] = (unsigned __int64)&off_6BCBD0;
  v1->n128_u64[0] = (unsigned __int64)off_6BCA58;
  v1[1] = result;
  return result;
}

