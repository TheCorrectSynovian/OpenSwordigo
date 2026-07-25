/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E2ADC
 * Mangled: _ZNK5Caver5Proto11EntityClass3NewEv
 * Demangled: Caver::Proto::EntityClass::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 13
 *   insn=0x00000000002E2AE8 string=0x00000000002E2AEC "( "
 *   insn=0x00000000002E2AE8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E2AEC string=0x00000000002E2AF0 "\t "
 *   insn=0x00000000002E2AF0 string=0x00000000002E2AF4 ""
 *   insn=0x00000000002E2AF4 string=0x00000000002E2AF8 ")F"
 *   insn=0x00000000002E2AFC string=0x00000000002E2B00 "A"
 *   insn=0x00000000002E2B00 string=0x00000000002E2B04 " "
 *   insn=0x00000000002E2B04 string=0x00000000002E2B08 "\t "
 *   insn=0x00000000002E2B08 string=0x00000000002E2B0C ")}C"
 *   insn=0x00000000002E2B0C string=0x00000000002E2B10 ""
 *   insn=0x00000000002E2B10 string=0x00000000002E2B14 " "
 *   insn=0x00000000002E2B14 string=0x00000000002E2B1C " "
 *   insn=0x00000000002E2B1C string=0x00000000002E2B20 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::EntityClass::New(Caver::Proto::EntityClass *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x30u);
  v1->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::EntityClass::_default_name_;
  v1->n128_u64[0] = (unsigned __int64)off_6C6958;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::EntityClass::_default_title_;
  v1[2].n128_u64[0] = 16843008;
  v1[1] = result;
  v1[2].n128_u64[1] = 0;
  return result;
}

