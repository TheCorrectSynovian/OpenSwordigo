/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D754
 * Mangled: _ZN5Caver7FWShellC2Ev
 * Demangled: Caver::FWShell::FWShell(void)
 *
 * Callers: 1
 *   0x00000000001F76F0  Caver::FWShell::FWShell(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF310  Caver::FWShellPreferences::FWShellPreferences(void)
 *   0x000000000047D880  Caver::FWShell::~FWShell()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 23
 *   insn=0x000000000047D768 string=0x000000000047D76C "U"
 *   insn=0x000000000047D76C string=0x000000000047D770 "I"
 *   insn=0x000000000047D774 string=0x000000000047D778 ")"
 *   insn=0x000000000047D784 string=0x000000000047D788 ")A"
 *   insn=0x000000000047D788 string=0x000000000047D78C "i"
 *   insn=0x000000000047D790 string=0x000000000047D794 "`"
 *   insn=0x000000000047D7A4 string=0x000000000047D7A8 "s"
 *   insn=0x000000000047D7D8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047D7DC string=0x000000000047D7E0 "t"
 *   insn=0x000000000047D7EC string=0x000000000047D7F0 "V"
 *   insn=0x000000000047D7EC string=0x000000000047D86C "t"
 *   insn=0x000000000047D7F0 string=0x000000000047D7F4 "7"
 *   insn=0x000000000047D808 string=0x000000000047D80C "\t"
 *   insn=0x000000000047D808 string=0x000000000047D828 "\t"
 *   insn=0x000000000047D80C string=0x000000000047D810 "*"
 *   insn=0x000000000047D810 string=0x000000000047D814 "\n"
 *   insn=0x000000000047D818 string=0x000000000047D81C "?"
 *   insn=0x000000000047D828 string=0x000000000047D82C "*"
 *   insn=0x000000000047D82C string=0x000000000047D830 "\n"
 *   insn=0x000000000047D830 string=0x000000000047D834 "?"
 *   insn=0x000000000047D854 string=0x000000000047D804 "!"
 *   insn=0x000000000047D85C string=0x000000000047D860 "A"
 *   insn=0x000000000047D874 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FWShell::FWShell(Caver::FWShell *this)
{
  Caver::FWShell *v1; // x19
  __int64 result; // x0

  v1 = this;
  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = off_6D5220;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  result = Caver::FWShellPreferences::FWShellPreferences((Caver::FWShell *)((char *)this + 32));
  *((_QWORD *)v1 + 10) = 0;
  v1 = (Caver::FWShell *)((char *)v1 + 80);
  *((_QWORD *)v1 + 1) = 0;
  *((_QWORD *)v1 + 2) = v1;
  *((_QWORD *)v1 + 3) = v1;
  *((_QWORD *)v1 + 4) = 0;
  *((_BYTE *)v1 + 40) = 0;
  return result;
}

