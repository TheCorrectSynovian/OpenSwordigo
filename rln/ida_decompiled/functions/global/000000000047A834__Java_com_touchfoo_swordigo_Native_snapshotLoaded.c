/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A834
 * Mangled: Java_com_touchfoo_swordigo_Native_snapshotLoaded
 * Demangled: Java_com_touchfoo_swordigo_Native_snapshotLoaded
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F4060  DataFromJByteArray(_JNIEnv *,_jbyteArray *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA670  Caver::ProfileManager_Android::HandleSnapshotLoaded(std::string const&,std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 74
 *   insn=0x000000000047A844 string=0x000000000047A848 "U"
 *   insn=0x000000000047A864 string=0x000000000047A868 ""
 *   insn=0x000000000047A88C string=0x000000000047A890 "h"
 *   insn=0x000000000047A88C string=0x00000000001F4060 "P'"
 *   insn=0x000000000047A89C string=0x000000000047A8A0 "t"
 *   insn=0x000000000047A8A0 string=0x00000000001FA670 "0'"
 *   insn=0x000000000047A8A4 string=0x000000000047A8A8 "S"
 *   insn=0x000000000047A8A8 string=0x000000000047A8AC "s"
 *   insn=0x000000000047A8B8 string=0x000000000047A8F0 "I"
 *   insn=0x000000000047A8C4 string=0x000000000047A8C8 "a"
 *   insn=0x000000000047A8C8 string=0x000000000047A914 "I"
 *   insn=0x000000000047A8D8 string=0x000000000047A978 "V"
 *   insn=0x000000000047A8F0 string=0x000000000047A8F4 ")=G"
 *   insn=0x000000000047A8F4 string=0x000000000047A8F8 "!"
 *   insn=0x000000000047A8FC string=0x000000000047A900 "\t"
 *   insn=0x000000000047A8FC string=0x000000000047A938 "\t"
 *   insn=0x000000000047A900 string=0x000000000047A904 "*"
 *   insn=0x000000000047A904 string=0x000000000047A908 "\n"
 *   insn=0x000000000047A90C string=0x000000000047A910 ""
 *   insn=0x000000000047A910 string=0x000000000047A944 "?"
 *   insn=0x000000000047A914 string=0x000000000047A918 ")=G"
 *   insn=0x000000000047A918 string=0x000000000047A91C "!"
 *   insn=0x000000000047A920 string=0x000000000047A924 "\t"
 *   insn=0x000000000047A920 string=0x000000000047A958 "\t"
 *   insn=0x000000000047A924 string=0x000000000047A928 "*"
 *   insn=0x000000000047A928 string=0x000000000047A92C "\n"
 *   insn=0x000000000047A934 string=0x000000000047A964 "?"
 *   insn=0x000000000047A938 string=0x000000000047A93C "*"
 *   insn=0x000000000047A93C string=0x000000000047A940 "\n"
 *   insn=0x000000000047A958 string=0x000000000047A95C "*"
 *   insn=0x000000000047A95C string=0x000000000047A960 "\n"
 *   insn=0x000000000047A964 string=0x000000000047A968 ","
 *   insn=0x000000000047A978 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047A97C string=0x000000000047A980 "J"
 *   insn=0x000000000047A980 string=0x000000000047A984 "J"
 *   insn=0x000000000047A988 string=0x000000000047A98C "(a"
 *   insn=0x000000000047A994 string=0x000000000047A998 "J"
 *   insn=0x000000000047A998 string=0x000000000047A99C "J=G"
 *   insn=0x000000000047A99C string=0x000000000047A9A0 ")!"
 *   insn=0x000000000047A9A4 string=0x000000000047A9A8 "*"
 *   insn=0x000000000047A9A4 string=0x000000000047A9BC "*"
 *   insn=0x000000000047A9A8 string=0x000000000047A9AC "K"
 *   insn=0x000000000047A9AC string=0x000000000047A9B0 "+"
 *   insn=0x000000000047A9B8 string=0x000000000047A9C8 "_"
 *   insn=0x000000000047A9BC string=0x000000000047A9C0 "K"
 *   insn=0x000000000047A9C0 string=0x000000000047A9C4 "+"
 *   insn=0x000000000047A9D4 string=0x000000000047A9D8 "s"
 *   insn=0x000000000047A9E4 string=0x000000000047A9E8 "I"
 *   insn=0x000000000047A9E8 string=0x000000000047A9EC ")"
 *   insn=0x000000000047A9F8 string=0x000000000047A9FC "I"
 *   insn=0x000000000047A9FC string=0x000000000047AA00 ")=G"
 *   insn=0x000000000047AA00 string=0x000000000047AA04 "!"
 *   insn=0x000000000047AA04 string=0x000000000047AA08 "i"
 *   insn=0x000000000047AA08 string=0x000000000047AA0C "\t"
 *   insn=0x000000000047AA08 string=0x000000000047AA34 "\t"
 *   insn=0x000000000047AA0C string=0x000000000047AA10 "*"
 *   insn=0x000000000047AA10 string=0x000000000047AA14 "\n"
 *   insn=0x000000000047AA18 string=0x000000000047AA1C "?"
 *   insn=0x000000000047AA1C string=0x000000000047AA20 "l"
 *   insn=0x000000000047AA24 string=0x000000000047AA28 "_"
 *   insn=0x000000000047AA34 string=0x000000000047AA38 "*"
 *   insn=0x000000000047AA38 string=0x000000000047AA3C "\n"
 *   insn=0x000000000047AA3C string=0x000000000047AA40 "?"
 *   insn=0x000000000047AA40 string=0x000000000047AA44 ""
 *   insn=0x000000000047AA4C string=0x000000000047AA50 "_"
 *   insn=0x000000000047AA54 string=0x000000000047AA58 "h"
 *   insn=0x000000000047AA54 string=0x000000000047AA70 "h"
 *   insn=0x000000000047AA60 string=0x000000000047AA64 ""
 *   insn=0x000000000047AA68 string=0x000000000047AA6C "@"
 *   insn=0x000000000047AA70 string=0x000000000047AA74 ""
 *   insn=0x000000000047AA74 string=0x000000000047AA78 "H"
 *   insn=0x000000000047AA78 string=0x000000000047AA80 "h"
 *   insn=0x000000000047AA84 string=0x000000000047AA88 ""
 *   insn=0x000000000047AA8C string=0x000000000047AA90 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Java_com_touchfoo_swordigo_Native_snapshotLoaded(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // x0
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9
  __int64 v9; // [xsp+0h] [xbp-40h]
  _QWORD v10[3]; // [xsp+8h] [xbp-38h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1352LL))(a1, a3, 0);
  sub_566BB8((int)v10, v3);
  DataFromJByteArray();
  Caver::ProfileManager_Android::HandleSnapshotLoaded();
  if ( (__int64 *)(v9 - 24) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v9 - 8);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete((void *)(v9 - 24));
  }
  v4 = (void *)(v10[0] - 24LL);
  if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v10[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v4);
  }
}

