/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B42F4
 * Mangled: _ZN5Caver22DocumentsDirectoryPathEv
 * Demangled: Caver::DocumentsDirectoryPath(void)
 *
 * Callers: 1
 *   0x00000000001F7740  Caver::DocumentsDirectoryPath(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB380  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000001FBDF0  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000004B44B8  Caver::FileExistsAtPath(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 44
 *   insn=0x00000000004B4304 string=0x00000000004B4308 "T"
 *   insn=0x00000000004B4318 string=0x0000000000597390 "Documents"
 *   insn=0x00000000004B4324 string=0x00000000004B4328 "$"
 *   insn=0x00000000004B433C string=0x00000000001FBDF0 "0'"
 *   insn=0x00000000004B435C string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000004B436C string=0x00000000001FB380 "0'"
 *   insn=0x00000000004B4394 string=0x00000000004B4398 ")=G"
 *   insn=0x00000000004B4398 string=0x00000000004B439C "!"
 *   insn=0x00000000004B43A0 string=0x00000000004B43A4 "\t"
 *   insn=0x00000000004B43A0 string=0x00000000004B43B8 "\t"
 *   insn=0x00000000004B43A4 string=0x00000000004B43A8 "*"
 *   insn=0x00000000004B43A8 string=0x00000000004B43AC "\n"
 *   insn=0x00000000004B43B4 string=0x00000000004B43C4 "?"
 *   insn=0x00000000004B43B8 string=0x00000000004B43BC "*"
 *   insn=0x00000000004B43BC string=0x00000000004B43C0 "\n"
 *   insn=0x00000000004B43D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B43E0 string=0x00000000004B43E4 "J"
 *   insn=0x00000000004B43E8 string=0x00000000004B43EC "(a"
 *   insn=0x00000000004B43F8 string=0x00000000004B43FC "J=G"
 *   insn=0x00000000004B43FC string=0x00000000004B4400 ")!"
 *   insn=0x00000000004B4400 string=0x00000000004B4404 "*"
 *   insn=0x00000000004B4404 string=0x00000000004B4408 "*"
 *   insn=0x00000000004B4404 string=0x00000000004B4428 "*"
 *   insn=0x00000000004B4408 string=0x00000000004B440C "K"
 *   insn=0x00000000004B440C string=0x00000000004B4410 "+"
 *   insn=0x00000000004B4414 string=0x00000000004B4418 "_"
 *   insn=0x00000000004B4428 string=0x00000000004B442C "K"
 *   insn=0x00000000004B442C string=0x00000000004B4430 "+"
 *   insn=0x00000000004B4430 string=0x00000000004B4434 "_"
 *   insn=0x00000000004B4434 string=0x00000000004B4438 "M"
 *   insn=0x00000000004B4448 string=0x00000000004B444C "i"
 *   insn=0x00000000004B4450 string=0x00000000004B4454 "(a"
 *   insn=0x00000000004B4460 string=0x00000000004B4464 "J=G"
 *   insn=0x00000000004B4464 string=0x00000000004B4468 ")!"
 *   insn=0x00000000004B446C string=0x00000000004B4470 "*"
 *   insn=0x00000000004B446C string=0x00000000004B449C "*"
 *   insn=0x00000000004B4470 string=0x00000000004B4474 "K"
 *   insn=0x00000000004B4474 string=0x00000000004B4478 "+"
 *   insn=0x00000000004B447C string=0x00000000004B4480 "_"
 *   insn=0x00000000004B4480 string=0x00000000004B4484 "l"
 *   insn=0x00000000004B4494 string=0x00000000004B4498 "5"
 *   insn=0x00000000004B449C string=0x00000000004B44A0 "K"
 *   insn=0x00000000004B44A0 string=0x00000000004B44A4 "+"
 *   insn=0x00000000004B44A4 string=0x00000000004B44A8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DocumentsDirectoryPath(Caver *this)
{
  void *v1; // x0
  __int64 result; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+8h] [xbp-38h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v5, "Documents");
  Caver::StringByAppendingPathComponent();
  v1 = (void *)(v5[0] - 24LL);
  if ( (__int64 *)(v5[0] - 24LL) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v5[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete(v1);
  }
  result = Caver::FileExistsAtPath();
  if ( (result & 1) == 0 )
    return Caver::CreateDirectoryAtPath();
  return result;
}

