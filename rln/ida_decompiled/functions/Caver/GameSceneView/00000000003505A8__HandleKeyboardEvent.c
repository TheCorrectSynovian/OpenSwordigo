/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003505A8
 * Mangled: _ZN5Caver13GameSceneView19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::GameSceneView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 1
 *   0x000000000035037C  Caver::GameSceneView::ToggleDebugInfo(void)
 *
 * Callees: 3
 *   0x00000000001F8ED0  Caver::CharControllerComponent::Hurt(void)
 *   0x00000000002020D0  Caver::GameSceneView::ToggleDebugInfo(void)
 *   0x0000000000202B40  Caver::CharControllerComponent::Die(void)
 *
 * Referenced strings: 28
 *   insn=0x00000000003505B0 string=0x00000000003505B4 "(@"
 *   insn=0x00000000003505B4 string=0x00000000003505B8 "H"
 *   insn=0x00000000003505B8 string=0x00000000003505E0 "("
 *   insn=0x00000000003505BC string=0x00000000003505C0 "("
 *   insn=0x00000000003505C4 string=0x00000000003505C8 "@"
 *   insn=0x00000000003505C8 string=0x0000000000350650 "x@"
 *   insn=0x00000000003505D0 string=0x00000000003505D4 "x@"
 *   insn=0x00000000003505D8 string=0x00000000003505DC "Y"
 *   insn=0x00000000003505E8 string=0x0000000000350600 "x@"
 *   insn=0x00000000003505EC string=0x00000000003505F0 " "
 *   insn=0x00000000003505F0 string=0x0000000000350634 ""
 *   insn=0x0000000000350600 string=0x0000000000350604 "H"
 *   insn=0x0000000000350604 string=0x0000000000350608 "\t"
 *   insn=0x0000000000350608 string=0x000000000035060C "(aM9h"
 *   insn=0x000000000035060C string=0x0000000000350610 "h"
 *   insn=0x0000000000350614 string=0x0000000000350618 "@"
 *   insn=0x0000000000350618 string=0x000000000035061C "\n"
 *   insn=0x000000000035061C string=0x0000000000350620 "J"
 *   insn=0x0000000000350624 string=0x0000000000350628 "?a9\n"
 *   insn=0x0000000000350628 string=0x000000000035062C "\n"
 *   insn=0x0000000000350634 string=0x0000000000350638 "\tx@"
 *   insn=0x0000000000350638 string=0x000000000035063C ""
 *   insn=0x000000000035063C string=0x0000000000350640 ""
 *   insn=0x0000000000350640 string=0x0000000000350644 ")"
 *   insn=0x0000000000350644 string=0x0000000000350648 "("
 *   insn=0x0000000000350658 string=0x00000000001F8ED0 "0'"
 *   insn=0x000000000035065C string=0x0000000000350660 "(a9"
 *   insn=0x0000000000350668 string=0x000000000035066C "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::HandleKeyboardEvent(__int64 result, _DWORD *a2)
{
  int v2; // w8
  int v3; // w8
  int v4; // w8
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x9
  char v8; // w8

  if ( a2[3] == 1 )
  {
    v2 = a2[2];
    if ( (v2 & 8) != 0 )
    {
      v4 = a2[4];
      switch ( v4 )
      {
        case 'D':
          v5 = *(_QWORD *)(result + 240);
          if ( v5 )
          {
            v6 = *(_QWORD *)(v5 + 32);
            if ( *(_BYTE *)(v6 + 856) )
            {
              if ( Caver::CollisionShapeComponent::drawDepth )
              {
                *(_BYTE *)(v6 + 856) = 0;
                Caver::CollisionShapeComponent::drawDepth = 0;
              }
              else
              {
                Caver::CollisionShapeComponent::drawDepth = 1;
              }
            }
            else
            {
              *(_BYTE *)(v6 + 856) = 1;
            }
          }
          break;
        case 'W':
          v7 = *(_QWORD *)(result + 240);
          v8 = *(_BYTE *)(result + 418) ^ 1;
          *(_BYTE *)(result + 418) = v8;
          *(_BYTE *)(*(_QWORD *)(v7 + 32) + 1028LL) = v8;
          break;
        case 'I':
          return Caver::GameSceneView::ToggleDebugInfo((Caver::GameSceneView *)result);
      }
    }
    else if ( (v2 & 0x20) != 0 )
    {
      v3 = a2[4];
      if ( v3 == 72 )
      {
        return Caver::CharControllerComponent::Hurt(*(Caver::CharControllerComponent **)(*(_QWORD *)(result + 240)
                                                                                       + 224LL));
      }
      else if ( v3 == 68 )
      {
        return Caver::CharControllerComponent::Die(*(Caver::CharControllerComponent **)(*(_QWORD *)(result + 240) + 224LL));
      }
    }
  }
  return result;
}

