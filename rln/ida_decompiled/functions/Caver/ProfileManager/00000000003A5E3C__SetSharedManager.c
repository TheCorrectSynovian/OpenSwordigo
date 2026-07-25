/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A5E3C
 * Mangled: _ZN5Caver14ProfileManager16SetSharedManagerERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::ProfileManager::SetSharedManager(boost::shared_ptr<Caver::ProfileManager> const&)
 *
 * Callers: 1
 *   0x00000000001F7AB0  Caver::ProfileManager::SetSharedManager(boost::shared_ptr<Caver::ProfileManager> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000003A5E44 string=0x00000000003A5E48 "\t @"
 *   insn=0x00000000003A5E4C string=0x00000000003A5E50 "\n"
 *   insn=0x00000000003A5E4C string=0x00000000003A5E5C "*"
 *   insn=0x00000000003A5E50 string=0x00000000003A5E54 "J"
 *   insn=0x00000000003A5E54 string=0x00000000003A5E58 "\n"
 *   insn=0x00000000003A5E5C string=0x00000000003A5E64 "S"
 *   insn=0x00000000003A5E64 string=0x00000000003A5E68 "I!"
 *   insn=0x00000000003A5E6C string=0x00000000003A5E70 "h"
 *   insn=0x00000000003A5E70 string=0x00000000003A5E74 ""
 *   insn=0x00000000003A5E74 string=0x00000000003A5E78 "h"
 *   insn=0x00000000003A5E78 string=0x00000000003A5E7C "!"
 *   insn=0x00000000003A5E7C string=0x00000000003A5E80 "h"
 *   insn=0x00000000003A5E84 string=0x00000000003A5E88 "\t@"
 *   insn=0x00000000003A5E8C string=0x00000000003A5E90 "h\n@"
 *   insn=0x00000000003A5E90 string=0x00000000003A5E94 ""
 *   insn=0x00000000003A5E94 string=0x00000000003A5E98 "h\n"
 *   insn=0x00000000003A5E9C string=0x00000000003A5EAC "h"
 *   insn=0x00000000003A5EBC string=0x00000000003A5EC0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::ProfileManager::SetSharedManager(__int64 *result)
{
  __int64 v1; // x8
  __int64 v2; // x9
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = *result;
  v1 = result[1];
  if ( v1 )
    ++*(_QWORD *)(v1 + 8);
  v3 = (_QWORD *)qword_6E9958;
  qword_6E9950 = v2;
  qword_6E9958 = v1;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        return (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  return result;
}

