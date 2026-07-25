/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5AD8
 * Mangled: _ZNK5Caver5Proto7Program3NewEv
 * Demangled: Caver::Proto::Program::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 10
 *   insn=0x00000000002D5AE4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D5AE8 string=0x00000000002D5AEC ""
 *   insn=0x00000000002D5AF4 string=0x00000000002D5AF8 ")"
 *   insn=0x00000000002D5AFC string=0x00000000002D5B00 "JmB"
 *   insn=0x00000000002D5B04 string=0x00000000002D5B08 "k9@"
 *   insn=0x00000000002D5B08 string=0x00000000002D5B0C " "
 *   insn=0x00000000002D5B0C string=0x00000000002D5B10 "A"
 *   insn=0x00000000002D5B10 string=0x00000000002D5B14 "@"
 *   insn=0x00000000002D5B14 string=0x00000000002D5B18 ""
 *   insn=0x00000000002D5B18 string=0x00000000002D5B1C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::Program::New(Caver::Proto::Program *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x30u);
  v1->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::Program::_default_name_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::Program::_default_string_;
  v1[2].n128_u64[0] = (unsigned __int64)&Caver::Proto::Program::_default_bytes_;
  v1->n128_u64[0] = (unsigned __int64)off_6C5FA8;
  v1[1] = result;
  v1[2].n128_u32[2] = 0;
  return result;
}

