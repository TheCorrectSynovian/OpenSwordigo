/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A5D0C
 * Mangled: _ZN5Caver14ProfileManager13sharedManagerEv
 * Demangled: Caver::ProfileManager::sharedManager(void)
 *
 * Callers: 1
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *
 * Callees: 4
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203940  boost::detail::shared_count::shared_count<Caver::ProfileManager>(Caver::ProfileManager *)
 *
 * Referenced strings: 29
 *   insn=0x00000000003A5D1C string=0x00000000003A5D20 "T"
 *   insn=0x00000000003A5D24 string=0x00000000003A5D28 "5"
 *   insn=0x00000000003A5D38 string=0x00000000003A5D3C ")>"
 *   insn=0x00000000003A5D3C string=0x00000000003A5D40 ""
 *   insn=0x00000000003A5D3C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A5D40 string=0x00000000003A5D44 ""
 *   insn=0x00000000003A5D50 string=0x00000000003A5D54 "A"
 *   insn=0x00000000003A5D54 string=0x00000000003A5D58 "h"
 *   insn=0x00000000003A5D5C string=0x00000000003A5D60 "?"
 *   insn=0x00000000003A5D64 string=0x00000000003A5D68 "i"
 *   insn=0x00000000003A5D70 string=0x00000000003A5D74 "h""
 *   insn=0x00000000003A5D78 string=0x00000000003A5D7C ")"
 *   insn=0x00000000003A5D80 string=0x00000000003A5D84 "iB"
 *   insn=0x00000000003A5DA8 string=0x00000000003A5DAC "("
 *   insn=0x00000000003A5DAC string=0x00000000003A5DB4 "\tM@"
 *   insn=0x00000000003A5DC4 string=0x00000000003A5DC8 "\n%"
 *   insn=0x00000000003A5DC8 string=0x00000000003A5DCC "3"
 *   insn=0x00000000003A5DCC string=0x00000000003A5DD0 "h"
 *   insn=0x00000000003A5DD0 string=0x00000000003A5DD4 ""
 *   insn=0x00000000003A5DD4 string=0x00000000003A5DD8 "h"
 *   insn=0x00000000003A5DDC string=0x00000000003A5DE0 "h"
 *   insn=0x00000000003A5DE4 string=0x00000000003A5DE8 "\t@"
 *   insn=0x00000000003A5DEC string=0x00000000003A5DF0 "h\n@"
 *   insn=0x00000000003A5DF0 string=0x00000000003A5DF4 ""
 *   insn=0x00000000003A5DF4 string=0x00000000003A5DF8 "h\n"
 *   insn=0x00000000003A5DFC string=0x00000000003A5E00 "h"
 *   insn=0x00000000003A5E04 string=0x00000000003A5E08 "@"
 *   insn=0x00000000003A5E20 string=0x00000000003A5E38 "&A"
 *   insn=0x00000000003A5E38 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileManager::sharedManager(Caver::ProfileManager *this)
{
  __int64 result; // x0
  __int64 v2; // x0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // [xsp+8h] [xbp-38h]
  __int64 v7; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  result = qword_6E9950;
  if ( !qword_6E9950 )
  {
    v2 = operator new(0x88u);
    *(_QWORD *)v2 = &off_6CE940;
    *(_QWORD *)(v2 + 16) = 0;
    *(_QWORD *)(v2 + 24) = 0;
    *(_QWORD *)(v2 + 32) = v2 + 16;
    *(_QWORD *)(v2 + 40) = v2 + 16;
    *(_QWORD *)(v2 + 48) = 0;
    *(_QWORD *)(v2 + 56) = 0;
    *(_QWORD *)(v2 + 64) = 0;
    *(_QWORD *)(v2 + 80) = 0;
    *(_QWORD *)(v2 + 96) = v2 + 80;
    *(_QWORD *)(v2 + 104) = v2 + 80;
    *(_QWORD *)(v2 + 128) = 0xC059000000000000LL;
    v6 = v2;
    *(_QWORD *)(v2 + 88) = 0;
    *(_QWORD *)(v2 + 112) = 0;
    *(_BYTE *)(v2 + 120) = 0;
    boost::detail::shared_count::shared_count<Caver::ProfileManager>();
    boost::detail::sp_enable_shared_from_this();
    v3 = (_QWORD *)qword_6E9958;
    qword_6E9950 = v6;
    qword_6E9958 = v7;
    if ( v3 )
    {
      v4 = v3[1] - 1LL;
      v3[1] = v4;
      if ( !v4 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v5 = v3[2] - 1LL;
        v3[2] = v5;
        if ( !v5 )
          (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
    return qword_6E9950;
  }
  return result;
}

