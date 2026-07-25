/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1288
 * Mangled: _ZN5Caver11AudioBuffer12FreeDataImplEv
 * Demangled: Caver::AudioBuffer::FreeDataImpl(void)
 *
 * Callers: 1
 *   0x00000000001F7540  Caver::AudioBuffer::FreeDataImpl(void)
 *
 * Callees: 1
 *   0x00000000001F89E0  .free
 *
 * Referenced strings: 3
 *   insn=0x00000000004D1294 string=0x00000000004D1298 "`\n@"
 *   insn=0x00000000004D1298 string=0x00000000004D129C "`"
 *   insn=0x00000000004D12A0 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AudioBuffer::FreeDataImpl(Caver::AudioBuffer *this)
{
  void *v2; // x0

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    free(v2);
    *((_QWORD *)this + 2) = 0;
  }
}

