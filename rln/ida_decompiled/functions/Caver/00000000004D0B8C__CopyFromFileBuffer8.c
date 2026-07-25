/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D0B8C
 * Mangled: _ZN5Caver19CopyFromFileBuffer8EPhPKhi
 * Demangled: Caver::CopyFromFileBuffer8(uchar *,uchar const*,int)
 *
 * Callers: 1
 *   0x00000000002031E0  Caver::CopyFromFileBuffer8(uchar *,uchar const*,int)
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::CopyFromFileBuffer8(Caver *this, unsigned __int8 *a2, const unsigned __int8 *a3)
{
  return memcpy(this, a2, (int)a3);
}

