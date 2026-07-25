/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005037C4
 * Mangled: _ZN13CPVRTModelPOD14ReadFromMemoryEPKcmPcmS2_m
 * Demangled: CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *
 * Callers: 1
 *   0x0000000000203D70  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F72D0  CPVRTModelPOD::Destroy(void)
 *   0x00000000001F79F0  CPVRTModelPOD::InitImpl(void)
 *   0x00000000001F80A0  CPVRTResourceFile::CPVRTResourceFile(char const*,ulong)
 *   0x00000000001FD7E0  CPVRTResourceFile::IsOpen(void)
 *   0x0000000000201760  .memcpy
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000503314  CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 38
 *   insn=0x00000000005037E0 string=0x00000000005037E4 "["
 *   insn=0x00000000005037E4 string=0x00000000005037E8 ")"
 *   insn=0x00000000005037E8 string=0x00000000005037EC "h"
 *   insn=0x00000000005037EC string=0x00000000005037F0 ")yA"
 *   insn=0x000000000050380C string=0x0000000000503810 "<A"
 *   insn=0x0000000000503820 string=0x0000000000503824 "o"
 *   insn=0x0000000000503824 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000503838 string=0x00000000001F80A0 "0'"
 *   insn=0x0000000000503844 string=0x0000000000503848 "`"
 *   insn=0x0000000000503844 string=0x00000000001FD7E0 "0'"
 *   insn=0x0000000000503848 string=0x0000000000503894 ""
 *   insn=0x0000000000503868 string=0x000000000050386C "("
 *   insn=0x0000000000503870 string=0x0000000000503874 "yA"
 *   insn=0x0000000000503874 string=0x0000000000503878 "A"
 *   insn=0x0000000000503880 string=0x0000000000503884 ""
 *   insn=0x0000000000503880 string=0x00000000005038BC "h"
 *   insn=0x0000000000503884 string=0x0000000000503888 ""
 *   insn=0x000000000050388C string=0x0000000000503890 ""
 *   insn=0x0000000000503894 string=0x0000000000503898 ""
 *   insn=0x00000000005038A4 string=0x00000000005038A8 "("
 *   insn=0x00000000005038A8 string=0x00000000005038AC "yA"
 *   insn=0x00000000005038B0 string=0x00000000005038B4 "A"
 *   insn=0x00000000005038C4 string=0x00000000005038C8 "A"
 *   insn=0x00000000005038C8 string=0x00000000005038F0 "x"
 *   insn=0x00000000005038F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000005038F8 string=0x00000000005038FC "m"
 *   insn=0x00000000005038FC string=0x0000000000503900 "("
 *   insn=0x00000000005038FC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000503900 string=0x0000000000503904 "yA"
 *   insn=0x0000000000503904 string=0x0000000000503908 "A"
 *   insn=0x0000000000503924 string=0x0000000000503928 ""
 *   insn=0x0000000000503928 string=0x000000000050392C ""
 *   insn=0x0000000000503950 string=0x0000000000503954 "_"
 *   insn=0x0000000000503954 string=0x00000000001F72D0 "0'"
 *   insn=0x0000000000503964 string=0x0000000000503968 "~"
 *   insn=0x000000000050396C string=0x0000000000503970 " "
 *   insn=0x0000000000503970 string=0x00000000001F79F0 "0'"
 *   insn=0x000000000050397C string=0x0000000000503980 "hB@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::ReadFromMemory(
        CPVRTModelPOD *this,
        const char *a2,
        unsigned __int64 a3,
        char *a4,
        __int64 a5,
        char *a6,
        __int64 a7)
{
  CPVRTResourceFile *v14; // x24
  unsigned int v15; // w19
  void (__fastcall **v17)(CSourceStream *__hidden); // [xsp+20h] [xbp-70h] BYREF
  CPVRTResourceFile *v18; // [xsp+28h] [xbp-68h]
  __int64 v19; // [xsp+30h] [xbp-60h]
  __int64 v20; // [xsp+38h] [xbp-58h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v17 = off_6D8DB0;
  v19 = 0;
  v14 = (CPVRTResourceFile *)operator new(0x20u);
  CPVRTResourceFile::CPVRTResourceFile(v14, a2, a3);
  v18 = v14;
  if ( (CPVRTResourceFile::IsOpen(v14) & 1) != 0 )
  {
    v15 = ((__int64 (__fastcall *)(CPVRTModelPOD *, void (__fastcall ***)(CSourceStream *__hidden), char *, __int64, char *, __int64))loc_50346C)(
            this,
            &v17,
            a4,
            a5,
            a6,
            a7);
    v17 = off_6D8DB0;
    if ( v18 )
      (*(void (__fastcall **)(CPVRTResourceFile *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  else
  {
    (*(void (__fastcall **)(CPVRTResourceFile *))(*(_QWORD *)v14 + 8LL))(v14);
    v18 = 0;
    v15 = 1;
    v17 = off_6D8DB0;
  }
  return v15;
}

