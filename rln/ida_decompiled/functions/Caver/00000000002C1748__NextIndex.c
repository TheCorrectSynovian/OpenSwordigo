/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1748
 * Mangled: _ZN5Caver9NextIndexEii
 * Demangled: Caver::NextIndex(int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002C1748 string=0x00000000002C174C "\t"
 *   insn=0x00000000002C174C string=0x00000000002C1750 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::NextIndex(Caver *this, int a2)
{
  return (unsigned int)(((int)this + 1) % a2);
}

