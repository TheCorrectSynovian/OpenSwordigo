/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D0A94
 * Mangled: _ZN5Caver17CopyToFileBuffer8EPhPKhi
 * Demangled: Caver::CopyToFileBuffer8(uchar *,uchar const*,int)
 *
 * Callers: 1
 *   0x00000000001FB860  Caver::CopyToFileBuffer8(uchar *,uchar const*,int)
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 1
 *   insn=0x00000000004D0A94 string=0x00000000004D0A98 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::CopyToFileBuffer8(Caver *this, unsigned __int8 *a2, const unsigned __int8 *a3)
{
  return memcpy(this, a2, (int)a3);
}

