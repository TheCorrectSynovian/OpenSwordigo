/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213528
 * Mangled: _ZN5Caver15FloatDataBuffer8FillZeroEv
 * Demangled: Caver::FloatDataBuffer::FillZero(void)
 *
 * Callers: 1
 *   0x00000000001FBED0  Caver::FloatDataBuffer::FillZero(void)
 *
 * Callees: 1
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 1
 *   insn=0x0000000000213538 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall Caver::FloatDataBuffer::FillZero(void **this)
{
  return memset(this[1], 0, 4LL * *(unsigned int *)this);
}

