/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E2F0
 * Mangled: _ZN5Caver14SizeOfDataTypeENS_8DataTypeE
 * Demangled: Caver::SizeOfDataType(Caver::DataType)
 *
 * Callers: 1
 *   0x00000000001FB1D0  Caver::SizeOfDataType(Caver::DataType)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000047E2F0 string=0x000000000047E2F4 ""
 *   insn=0x000000000047E300 string=0x000000000047E308 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SizeOfDataType(int a1)
{
  if ( (unsigned int)(a1 - 5120) > 6 )
    return 0;
  else
    return dword_5965F0[a1 - 5120];
}

