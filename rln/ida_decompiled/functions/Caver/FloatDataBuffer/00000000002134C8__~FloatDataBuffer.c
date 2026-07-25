/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002134C8
 * Mangled: _ZN5Caver15FloatDataBufferD2Ev
 * Demangled: Caver::FloatDataBuffer::~FloatDataBuffer()
 *
 * Callers: 1
 *   0x00000000001F5400  Caver::FloatDataBuffer::~FloatDataBuffer()
 *
 * Callees: 1
 *   0x00000000001F4F60  operator delete[](void *)
 *
 * Referenced strings: 2
 *   insn=0x00000000002134C8 string=0x00000000002134CC "@"
 *   insn=0x00000000002134D0 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FloatDataBuffer::~FloatDataBuffer(Caver::FloatDataBuffer *this)
{
  void *v1; // x0

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    operator delete[](v1);
}

