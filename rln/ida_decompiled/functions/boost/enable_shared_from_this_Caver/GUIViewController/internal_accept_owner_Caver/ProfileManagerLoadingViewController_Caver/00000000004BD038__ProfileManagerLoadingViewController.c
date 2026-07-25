/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD038
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_35ProfileManagerLoadingViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileManagerLoadingViewController,Caver::ProfileManagerLoadingViewController>(boost::shared_ptr<Caver::ProfileManagerLoadingViewController> const*,Caver::ProfileManagerLoadingViewController *)
 *
 * Callers: 1
 *   0x00000000001F9A90  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileManagerLoadingViewController,Caver::ProfileManagerLoadingViewController>(boost::shared_ptr<Caver::ProfileManagerLoadingViewController> const*,Caver::ProfileManagerLoadingViewController *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000004BD048 string=0x00000000004BD04C "`"
 *   insn=0x00000000004BD04C string=0x00000000004BD050 ""
 *   insn=0x00000000004BD04C string=0x00000000004BD058 "3"
 *   insn=0x00000000004BD050 string=0x00000000004BD054 "h"
 *   insn=0x00000000004BD05C string=0x00000000004BD060 "h"
 *   insn=0x00000000004BD060 string=0x00000000004BD064 ""
 *   insn=0x00000000004BD064 string=0x00000000004BD068 "h"
 *   insn=0x00000000004BD078 string=0x00000000004BD07C "h\n@"
 *   insn=0x00000000004BD07C string=0x00000000004BD080 ""
 *   insn=0x00000000004BD080 string=0x00000000004BD084 "h\n"
 *   insn=0x00000000004BD088 string=0x00000000004BD08C "@"
 *   insn=0x00000000004BD08C string=0x00000000004BD090 ""
 *   insn=0x00000000004BD090 string=0x00000000004BD094 ""
 *   insn=0x00000000004BD098 string=0x00000000004BD09C ""
 *   insn=0x00000000004BD09C string=0x00000000004BD0A0 "@"
 *   insn=0x00000000004BD0AC string=0x00000000004BD0B0 "h"
 *   insn=0x00000000004BD0B0 string=0x00000000004BD0B4 ""
 *   insn=0x00000000004BD0B4 string=0x00000000004BD0B8 "h"
 *   insn=0x00000000004BD0B8 string=0x00000000004BD0BC "!"
 *   insn=0x00000000004BD0BC string=0x00000000004BD0C0 "h"
 *   insn=0x00000000004BD0C4 string=0x00000000004BD0C8 "\t@"
 *   insn=0x00000000004BD0CC string=0x00000000004BD0D0 "h\n@"
 *   insn=0x00000000004BD0D0 string=0x00000000004BD0D4 ""
 *   insn=0x00000000004BD0D4 string=0x00000000004BD0D8 "h\n"
 *   insn=0x00000000004BD0DC string=0x00000000004BD0EC "h"
 *   insn=0x00000000004BD0FC string=0x00000000004BD100 " "
 *   insn=0x00000000004BD104 string=0x00000000004BD108 "3"
 *   insn=0x00000000004BD108 string=0x00000000004BD10C "h"
 *   insn=0x00000000004BD10C string=0x00000000004BD110 ""
 *   insn=0x00000000004BD110 string=0x00000000004BD114 "h"
 *   insn=0x00000000004BD118 string=0x00000000004BD11C "h"
 *   insn=0x00000000004BD11C string=0x00000000004BD120 "\t@"
 *   insn=0x00000000004BD128 string=0x00000000004BD12C "h\n@"
 *   insn=0x00000000004BD12C string=0x00000000004BD130 ""
 *   insn=0x00000000004BD130 string=0x00000000004BD134 "h\n"
 *   insn=0x00000000004BD138 string=0x00000000004BD13C "h"
 *   insn=0x00000000004BD13C string=0x00000000004BD140 "@"
 *   insn=0x00000000004BD150 string=0x00000000004BD154 "~D"
 *   insn=0x00000000004BD164 string=0x00000000004BD168 "_"
 *   insn=0x00000000004BD170 string=0x00000000004BD174 "H"
 *   insn=0x00000000004BD170 string=0x00000000004BD188 "_"
 *   insn=0x00000000004BD174 string=0x00000000004BD178 ""
 *   insn=0x00000000004BD17C string=0x00000000004BD180 "h"
 *   insn=0x00000000004BD18C string=0x00000000004BD1A4 "_"
 *   insn=0x00000000004BD190 string=0x00000000004BD194 "h\n"
 *   insn=0x00000000004BD198 string=0x00000000004BD19C "`"
 *   insn=0x00000000004BD1A8 string=0x00000000004BD1AC "_"
 *   insn=0x00000000004BD1AC string=0x00000000004BD1B0 "!"
 *   insn=0x00000000004BD1B0 string=0x00000000004BD1B4 "h"
 *   insn=0x00000000004BD1B4 string=0x00000000004BD1B8 "!"
 *   insn=0x00000000004BD1B8 string=0x00000000004BD1BC ""
 *   insn=0x00000000004BD1C0 string=0x00000000004BD1C4 "*"
 *   insn=0x00000000004BD1C4 string=0x00000000004BD1C8 "!"
 *   insn=0x00000000004BD1C8 string=0x00000000004BD1CC "_"
 *   insn=0x00000000004BD1C8 string=0x0000000000597BD0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver22ProfileManager_AndroidEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x00000000004BD1CC string=0x00000000004BD1D0 " "
 *   insn=0x00000000004BD1D4 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileManagerLoadingViewController,Caver::ProfileManagerLoadingViewController>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  result = (_QWORD *)a1[1];
  if ( !result || !result[1] )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
      ++v5[1];
    *a1 = a3;
    if ( v5 != result )
    {
      if ( v5 )
        ++v5[2];
      if ( result )
      {
        v6 = result[2] - 1LL;
        result[2] = v6;
        if ( !v6 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      }
      a1[1] = v5;
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return result;
}

