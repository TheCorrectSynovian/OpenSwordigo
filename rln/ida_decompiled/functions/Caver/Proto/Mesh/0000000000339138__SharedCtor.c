/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000339138
 * Mangled: _ZN5Caver5Proto4Mesh10SharedCtorEv
 * Demangled: Caver::Proto::Mesh::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000033914C string=0x0000000000339150 "h"
 *   insn=0x0000000000339150 string=0x0000000000339154 "qE"
 *   insn=0x000000000033915C string=0x0000000000339160 "h"
 *   insn=0x0000000000339160 string=0x0000000000339164 "%F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::Mesh::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u64[1] = 0;
  this[1].n128_u32[0] = 0;
  this[2].n128_u64[0] = 0;
  this[2].n128_u64[1] = 0;
  this[1].n128_u64[1] = 0;
  this[8].n128_u64[0] = 0;
  this[8].n128_u64[1] = 0;
  this[7].n128_u64[1] = 0;
  this[6].n128_u64[1] = 0;
  this[7].n128_u64[0] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::Mesh::_default_vertex_data_;
  this[10].n128_u32[0] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::Mesh::_default_index_data_;
  this[9] = result;
  return result;
}

