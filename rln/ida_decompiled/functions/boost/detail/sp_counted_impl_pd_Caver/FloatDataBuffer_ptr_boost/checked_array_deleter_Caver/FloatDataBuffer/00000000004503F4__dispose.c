/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004503F4
 * Mangled: _ZN5boost6detail18sp_counted_impl_pdIPN5Caver15FloatDataBufferENS_21checked_array_deleterIS3_EEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_pd<Caver::FloatDataBuffer *,boost::checked_array_deleter<Caver::FloatDataBuffer>>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5400  Caver::FloatDataBuffer::~FloatDataBuffer()
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000045040C string=0x0000000000450410 "h"
 *   insn=0x0000000000450424 string=0x00000000001F5400 "P'"
 *   insn=0x0000000000450440 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000450470 string=0x0000000000450474 "a"
 *   insn=0x0000000000450498 string=0x000000000045049C "("
 *   insn=0x000000000045049C string=0x00000000004504A0 ")"
 *   insn=0x00000000004504A0 string=0x0000000000595330 "N5boost21checked_array_deleterIN5Caver15FloatDataBufferEEE"
 *   insn=0x00000000004504A8 string=0x00000000004504AC "`"
 *   insn=0x00000000004504AC string=0x00000000004504B0 "\t"
 *   insn=0x00000000004504AC string=0x00000000004504D8 "`"
 *   insn=0x00000000004504B0 string=0x00000000004504B4 "?"
 *   insn=0x00000000004504BC string=0x00000000004504C0 "!"
 *   insn=0x00000000004504C8 string=0x00000000004504CC "`"
 *   insn=0x00000000004504C8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_pd<Caver::FloatDataBuffer *,boost::checked_array_deleter<Caver::FloatDataBuffer>>::dispose(
        __int64 a1)
{
  __int64 v1; // x21
  __int64 v2; // x8
  __int64 v3; // x22

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 - 8);
    if ( v2 )
    {
      v3 = 16 * v2;
      do
      {
        Caver::FloatDataBuffer::~FloatDataBuffer((Caver::FloatDataBuffer *)(v1 + v3 - 16));
        v3 -= 16;
      }
      while ( v3 );
    }
    operator delete[]((void *)(v1 - 8));
  }
}

