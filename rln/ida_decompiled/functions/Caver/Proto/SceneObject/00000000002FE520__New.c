/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FE520
 * Mangled: _ZNK5Caver5Proto11SceneObject3NewEv
 * Demangled: Caver::Proto::SceneObject::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 14
 *   insn=0x00000000002FE528 string=0x00000000002FE52C "-"
 *   insn=0x00000000002FE52C string=0x00000000002FE530 ""
 *   insn=0x00000000002FE52C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FE530 string=0x00000000002FE534 ""
 *   insn=0x00000000002FE534 string=0x00000000002FE538 "("
 *   insn=0x00000000002FE538 string=0x00000000002FE53C "9@"
 *   insn=0x00000000002FE540 string=0x00000000002FE544 "\t0"
 *   insn=0x00000000002FE54C string=0x00000000002FE550 "h"
 *   insn=0x00000000002FE550 string=0x00000000002FE554 "H"
 *   insn=0x00000000002FE554 string=0x00000000002FE558 "!A"
 *   insn=0x00000000002FE560 string=0x00000000002FE564 "A"
 *   insn=0x00000000002FE564 string=0x00000000002FE568 ""
 *   insn=0x00000000002FE568 string=0x00000000002FE56C "("
 *   insn=0x00000000002FE56C string=0x00000000002FE570 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::SceneObject::New(Caver::Proto::SceneObject *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x90u);
  v1[2].n128_u64[0] = (unsigned __int64)&v1[3].n128_u64[1];
  v1[3].n128_u32[0] = 4;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::SceneObject::_default_template_name_;
  v1[6].n128_u32[2] = 1065353216;
  v1[2].n128_u64[1] = 0;
  v1->n128_u32[2] = 0;
  v1->n128_u64[0] = (unsigned __int64)off_6C73F8;
  v1[5].n128_u64[1] = 0;
  v1[6].n128_u64[0] = 0;
  v1[7].n128_u64[0] = 0;
  v1[7].n128_u8[8] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::SceneObject::_default_identifier_;
  v1[8].n128_u64[0] = 0;
  v1[1] = result;
  v1[8].n128_u32[2] = 0;
  return result;
}

