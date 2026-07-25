/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000339B04
 * Mangled: _ZNK5Caver5Proto4Mesh3NewEv
 * Demangled: Caver::Proto::Mesh::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 11
 *   insn=0x0000000000339B10 string=0x0000000000339B14 " "
 *   insn=0x0000000000339B10 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000339B1C string=0x0000000000339B20 "@"
 *   insn=0x0000000000339B20 string=0x0000000000339B24 "h"
 *   insn=0x0000000000339B24 string=0x0000000000339B28 "qE"
 *   insn=0x0000000000339B38 string=0x0000000000339B3C "h"
 *   insn=0x0000000000339B3C string=0x0000000000339B40 ""
 *   insn=0x0000000000339B4C string=0x0000000000339B50 "A"
 *   insn=0x0000000000339B58 string=0x0000000000339B5C ""
 *   insn=0x0000000000339B5C string=0x0000000000339B60 "h"
 *   insn=0x0000000000339B60 string=0x0000000000339B64 "%F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::Mesh::New(Caver::Proto::Mesh *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0xA8u);
  v1[2].n128_u64[1] = 0;
  v1[3].n128_u64[0] = (unsigned __int64)&v1[4].n128_u64[1];
  v1[4].n128_u32[0] = 4;
  v1[3].n128_u64[1] = 0;
  v1->n128_u64[1] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::Mesh::_default_vertex_data_;
  v1[1].n128_u32[0] = 0;
  v1[1].n128_u64[1] = 0;
  v1[2].n128_u64[0] = 0;
  v1[8].n128_u64[0] = 0;
  v1[8].n128_u64[1] = 0;
  v1[7].n128_u64[0] = 0;
  v1[7].n128_u64[1] = 0;
  v1[6].n128_u64[1] = 0;
  v1->n128_u64[0] = (unsigned __int64)off_6C9D38;
  v1[10].n128_u32[0] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::Mesh::_default_index_data_;
  v1[9] = result;
  return result;
}

