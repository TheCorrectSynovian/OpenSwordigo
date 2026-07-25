/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A5CA4
 * Mangled: _ZN5boost10shared_ptrIN5Caver14ProfileManagerEED2Ev
 * Demangled: boost::shared_ptr<Caver::ProfileManager>::~shared_ptr()
 *
 * Callers: 2
 *   0x0000000000209D2C  sub_209D2C
 *   0x00000000003A5B3C  Caver::ProfilesHeaderView::~ProfilesHeaderView()
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000003A5CB4 string=0x00000000003A5CB8 "h"
 *   insn=0x00000000003A5CB8 string=0x00000000003A5CBC ""
 *   insn=0x00000000003A5CBC string=0x00000000003A5CC0 "h"
 *   insn=0x00000000003A5CC0 string=0x00000000003A5CC4 "!"
 *   insn=0x00000000003A5CC4 string=0x00000000003A5CC8 "h"
 *   insn=0x00000000003A5CCC string=0x00000000003A5CD0 "\t@"
 *   insn=0x00000000003A5CD4 string=0x00000000003A5CD8 "h\n@"
 *   insn=0x00000000003A5CD8 string=0x00000000003A5CDC ""
 *   insn=0x00000000003A5CDC string=0x00000000003A5CE0 "h\n"
 *   insn=0x00000000003A5CE4 string=0x00000000003A5CF4 "h"
 *   insn=0x00000000003A5D04 string=0x00000000003A5D08 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::ProfileManager>::~shared_ptr(__int64 result)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  v1 = *(_QWORD **)(result + 8);
  if ( v1 )
  {
    v2 = v1[1] - 1LL;
    v1[1] = v2;
    if ( !v2 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
      v3 = v1[2] - 1LL;
      v1[2] = v3;
      if ( !v3 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 24LL))(v1);
    }
  }
  return result;
}

