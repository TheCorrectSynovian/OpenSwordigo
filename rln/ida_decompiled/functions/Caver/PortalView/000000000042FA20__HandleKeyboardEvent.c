/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042FA20
 * Mangled: _ZN5Caver10PortalView19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::PortalView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000001FF860  Caver::MapView::SelectNodeAtIndex(ulong)
 *   0x00000000002028E0  Caver::MapView::NearestNodeInDirection(Caver::MapViewNode *,Caver::Vector2 const&)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 55
 *   insn=0x000000000042FA30 string=0x000000000042FA34 "U"
 *   insn=0x000000000042FA4C string=0x000000000042FA50 "!\n"
 *   insn=0x000000000042FA58 string=0x000000000042FA5C "*5"
 *   insn=0x000000000042FA5C string=0x000000000042FA60 "_"
 *   insn=0x000000000042FA64 string=0x000000000042FA68 ")"
 *   insn=0x000000000042FA64 string=0x000000000042FB34 "?"
 *   insn=0x000000000042FA68 string=0x000000000042FA70 "*y"
 *   insn=0x000000000042FA68 string=0x0000000000594B50 "4"
 *   insn=0x000000000042FA70 string=0x000000000042FA74 "K"
 *   insn=0x000000000042FA7C string=0x000000000042FA80 "`"
 *   insn=0x000000000042FA80 string=0x000000000042FA84 "`"
 *   insn=0x000000000042FA80 string=0x000000000042FAB4 "`"
 *   insn=0x000000000042FA80 string=0x000000000042FAD0 "+"
 *   insn=0x000000000042FA84 string=0x000000000042FA88 ""
 *   insn=0x000000000042FA88 string=0x000000000042FA8C "h"
 *   insn=0x000000000042FA8C string=0x000000000042FA90 "h"
 *   insn=0x000000000042FA90 string=0x000000000042FA94 "\t"
 *   insn=0x000000000042FA94 string=0x000000000042FA98 "i\t"
 *   insn=0x000000000042FA98 string=0x000000000042FA9C "\t"
 *   insn=0x000000000042FA9C string=0x000000000042FAA0 ""
 *   insn=0x000000000042FAA0 string=0x000000000042FAA4 ")"
 *   insn=0x000000000042FAA4 string=0x000000000042FAA8 "ii"
 *   insn=0x000000000042FAA8 string=0x000000000042FAAC ""
 *   insn=0x000000000042FAD4 string=0x000000000042FAD8 "`"
 *   insn=0x000000000042FAD8 string=0x000000000042FADC "\n"
 *   insn=0x000000000042FADC string=0x000000000042FAE0 "\n"
 *   insn=0x000000000042FAE0 string=0x000000000042FAE4 "\n"
 *   insn=0x000000000042FAE4 string=0x000000000042FAE8 ""
 *   insn=0x000000000042FAE8 string=0x000000000042FAEC " "
 *   insn=0x000000000042FAF0 string=0x000000000042FAF4 "J"
 *   insn=0x000000000042FAF4 string=0x000000000042FAF8 "aij"
 *   insn=0x000000000042FB00 string=0x000000000042FB04 "wK"
 *   insn=0x000000000042FB08 string=0x000000000042FB0C ""
 *   insn=0x000000000042FB0C string=0x000000000042FB10 "`"
 *   insn=0x000000000042FB14 string=0x000000000042FB18 "R?"
 *   insn=0x000000000042FB18 string=0x000000000042FB1C "a"
 *   insn=0x000000000042FB1C string=0x000000000042FB20 " x@"
 *   insn=0x000000000042FB20 string=0x000000000042FB24 ""
 *   insn=0x000000000042FB24 string=0x000000000042FB28 ""
 *   insn=0x000000000042FB38 string=0x000000000042FB3C "?"
 *   insn=0x000000000042FB44 string=0x000000000042FB48 "A"
 *   insn=0x000000000042FB50 string=0x000000000042FB54 ""
 *   insn=0x000000000042FB54 string=0x000000000042FB58 "+"
 *   insn=0x000000000042FB68 string=0x000000000042FB6C "\t"
 *   insn=0x000000000042FB6C string=0x000000000042FB70 "+"
 *   insn=0x000000000042FB70 string=0x000000000042FB74 "+"
 *   insn=0x000000000042FB84 string=0x000000000042FB88 "+"
 *   insn=0x000000000042FB88 string=0x000000000042FB8C "k"
 *   insn=0x000000000042FB98 string=0x000000000042FB9C "!."
 *   insn=0x000000000042FB9C string=0x00000000001FB420 "0'"
 *   insn=0x000000000042FBA8 string=0x000000000042FBAC "!"
 *   insn=0x000000000042FBC8 string=0x000000000042FBCC "+"
 *   insn=0x000000000042FBCC string=0x000000000042FBD0 "K"
 *   insn=0x000000000042FBE0 string=0x000000000042FBE4 "+"
 *   insn=0x000000000042FBF0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalView::HandleKeyboardEvent(__int64 result, __int64 a2)
{
  __int64 v2; // x19
  int v3; // kr10_4
  char v4; // w10
  __int64 v5; // x8
  int v6; // w9
  Caver::MapViewNode *v7; // x1
  int v8; // w8
  float v9[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v10; // [xsp+8h] [xbp-28h]

  v2 = result;
  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)(a2 + 12) == 1 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    v4 = 0;
    switch ( v3 )
    {
      case 13:
      case 17:
      case 38:
      case 65:
        result = *(_QWORD *)(result + 304);
        if ( !*(_BYTE *)(result + 228) )
          goto LABEL_6;
        v5 = *(_QWORD *)(v2 + 272);
        v6 = *(unsigned __int8 *)(v5 + 1016);
        if ( *(_BYTE *)(v5 + 1016) )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 280) + 16LL * *(_QWORD *)(v5 + 1024)) + 41LL) )
            goto LABEL_7;
          goto LABEL_6;
        }
        v8 = 0;
        v4 = 1;
        if ( v6 )
          goto LABEL_9;
        goto LABEL_17;
      case 14:
      case 15:
      case 16:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 34:
      case 35:
      case 36:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
        goto LABEL_17;
      case 27:
      case 33:
LABEL_6:
        result = Caver::GUIControl::SendActionsForControlEvent();
LABEL_7:
        v4 = 1;
        goto LABEL_17;
      case 37:
        v8 = 0;
        v6 = -1;
        goto LABEL_9;
      case 39:
        v8 = 0;
        v6 = 1;
        goto LABEL_9;
      default:
        if ( v3 == 187 )
        {
          v6 = 0;
          v8 = 1;
LABEL_9:
          result = *(_QWORD *)(v2 + 272);
          if ( *(_BYTE *)(result + 1016) )
          {
            v7 = *(Caver::MapViewNode **)(*(_QWORD *)(result + 280) + 16LL * *(_QWORD *)(result + 1024));
            v9[0] = (float)v6;
            v9[1] = (float)v8;
            result = Caver::MapView::NearestNodeInDirection((Caver::MapView *)result, v7, (const Caver::Vector2 *)v9);
            if ( result )
            {
              Caver::MapView::SelectNodeAtIndex(*(Caver::MapView **)(v2 + 272), **(_QWORD **)result);
              return (***(__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(v2 + 272) + 240LL))(*(_QWORD *)(*(_QWORD *)(v2 + 272) + 240LL));
            }
          }
          return result;
        }
        v4 = 0;
        if ( v3 == 189 )
        {
          v6 = 0;
          v8 = -1;
          goto LABEL_9;
        }
LABEL_17:
        if ( (v4 & 1) != 0 )
          return result;
        break;
    }
  }
  return Caver::GUIResponder::HandleKeyboardEvent();
}

