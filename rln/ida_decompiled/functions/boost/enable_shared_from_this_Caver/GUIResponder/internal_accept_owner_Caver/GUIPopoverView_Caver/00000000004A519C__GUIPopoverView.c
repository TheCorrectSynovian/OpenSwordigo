/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A519C
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14GUIPopoverViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>(boost::shared_ptr<Caver::GUIPopoverView> const*,Caver::GUIPopoverView *)
 *
 * Callers: 1
 *   0x0000000000200130  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>(boost::shared_ptr<Caver::GUIPopoverView> const*,Caver::GUIPopoverView *)
 *
 * Callees: 4
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000054C640  sub_54C640
 *   0x000000000054C700  sub_54C700
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 79
 *   insn=0x00000000004A51AC string=0x00000000004A51B0 "`"
 *   insn=0x00000000004A51B0 string=0x00000000004A51B4 ""
 *   insn=0x00000000004A51B0 string=0x00000000004A51BC "3"
 *   insn=0x00000000004A51B4 string=0x00000000004A51B8 "h"
 *   insn=0x00000000004A51C0 string=0x00000000004A51C4 "h"
 *   insn=0x00000000004A51C4 string=0x00000000004A51C8 ""
 *   insn=0x00000000004A51C8 string=0x00000000004A51CC "h"
 *   insn=0x00000000004A51DC string=0x00000000004A51E0 "h\n@"
 *   insn=0x00000000004A51E0 string=0x00000000004A51E4 ""
 *   insn=0x00000000004A51E4 string=0x00000000004A51E8 "h\n"
 *   insn=0x00000000004A51EC string=0x00000000004A51F0 "@"
 *   insn=0x00000000004A51F0 string=0x00000000004A51F4 ""
 *   insn=0x00000000004A51F4 string=0x00000000004A51F8 ""
 *   insn=0x00000000004A51FC string=0x00000000004A5200 ""
 *   insn=0x00000000004A5200 string=0x00000000004A5204 "@"
 *   insn=0x00000000004A5210 string=0x00000000004A5214 "h"
 *   insn=0x00000000004A5214 string=0x00000000004A5218 ""
 *   insn=0x00000000004A5218 string=0x00000000004A521C "h"
 *   insn=0x00000000004A521C string=0x00000000004A5220 "!"
 *   insn=0x00000000004A5220 string=0x00000000004A5224 "h"
 *   insn=0x00000000004A5228 string=0x00000000004A522C "\t@"
 *   insn=0x00000000004A5230 string=0x00000000004A5234 "h\n@"
 *   insn=0x00000000004A5234 string=0x00000000004A5238 ""
 *   insn=0x00000000004A5238 string=0x00000000004A523C "h\n"
 *   insn=0x00000000004A5240 string=0x00000000004A5250 "h"
 *   insn=0x00000000004A5260 string=0x00000000004A5264 " "
 *   insn=0x00000000004A5268 string=0x00000000004A526C "3"
 *   insn=0x00000000004A526C string=0x00000000004A5270 "h"
 *   insn=0x00000000004A5270 string=0x00000000004A5274 ""
 *   insn=0x00000000004A5274 string=0x00000000004A5278 "h"
 *   insn=0x00000000004A527C string=0x00000000004A5280 "h"
 *   insn=0x00000000004A5280 string=0x00000000004A5284 "\t@"
 *   insn=0x00000000004A528C string=0x00000000004A5290 "h\n@"
 *   insn=0x00000000004A5290 string=0x00000000004A5294 ""
 *   insn=0x00000000004A5294 string=0x00000000004A5298 "h\n"
 *   insn=0x00000000004A529C string=0x00000000004A52A0 "h"
 *   insn=0x00000000004A52A0 string=0x00000000004A52A4 "@"
 *   insn=0x00000000004A52B4 string=0x00000000004A52B8 "%"
 *   insn=0x00000000004A52E0 string=0x00000000004A52E4 "@"
 *   insn=0x00000000004A52E8 string=0x00000000004A52EC "h"
 *   insn=0x00000000004A5308 string=0x00000000004A530C ""
 *   insn=0x00000000004A5314 string=0x00000000004A5318 ""
 *   insn=0x00000000004A5324 string=0x00000000004A5328 "`"
 *   insn=0x00000000004A5338 string=0x00000000004A533C "\t"
 *   insn=0x00000000004A533C string=0x00000000004A5340 "?"
 *   insn=0x00000000004A5340 string=0x00000000004A5344 "#"
 *   insn=0x00000000004A5364 string=0x00000000004A5368 "i1"
 *   insn=0x00000000004A5368 string=0x00000000004A536C ")"
 *   insn=0x00000000004A536C string=0x00000000004A5370 ")"
 *   insn=0x00000000004A539C string=0x00000000004A53A0 "?"
 *   insn=0x00000000004A53A4 string=0x00000000004A53A8 ":"
 *   insn=0x00000000004A53A8 string=0x00000000004A5490 "s2"
 *   insn=0x00000000004A53AC string=0x00000000004A53B0 """
 *   insn=0x00000000004A53B8 string=0x00000000004A53BC "`"
 *   insn=0x00000000004A53C4 string=0x00000000004A53C8 ""
 *   insn=0x00000000004A53D0 string=0x00000000004A53D4 "h"
 *   insn=0x00000000004A53DC string=0x00000000004A53E0 "s"
 *   insn=0x00000000004A53E0 string=0x00000000004A53E4 "1"
 *   insn=0x00000000004A53EC string=0x00000000004A53F0 "."
 *   insn=0x00000000004A53F8 string=0x00000000004A53FC "+"
 *   insn=0x00000000004A5400 string=0x00000000004A5404 ")"
 *   insn=0x00000000004A5408 string=0x00000000004A540C "i"
 *   insn=0x00000000004A5410 string=0x00000000004A5414 "h"
 *   insn=0x00000000004A5414 string=0x00000000004A5418 "ib"
 *   insn=0x00000000004A5418 string=0x00000000004A541C "jB"
 *   insn=0x00000000004A5420 string=0x00000000004A5424 "I1"
 *   insn=0x00000000004A5424 string=0x00000000004A5428 ")"
 *   insn=0x00000000004A5428 string=0x00000000004A542C ")"
 *   insn=0x00000000004A5434 string=0x00000000004A5438 "b"
 *   insn=0x00000000004A5438 string=0x00000000004A5484 ""
 *   insn=0x00000000004A543C string=0x00000000004A5440 " "
 *   insn=0x00000000004A5458 string=0x00000000004A545C "h"
 *   insn=0x00000000004A545C string=0x00000000004A5460 "ib"
 *   insn=0x00000000004A5460 string=0x00000000004A5464 "jB"
 *   insn=0x00000000004A5468 string=0x00000000004A546C "I1"
 *   insn=0x00000000004A546C string=0x00000000004A5470 ")"
 *   insn=0x00000000004A5470 string=0x00000000004A5474 ")"
 *   insn=0x00000000004A547C string=0x00000000004A5480 "C"
 *   insn=0x00000000004A549C string=0x00000000004A54A0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>(
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

