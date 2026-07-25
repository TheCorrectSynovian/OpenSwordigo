/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E4B44
 * Mangled: _ZN5Caver11TargetFrame21HideAnimationFinishedEPvPNS_8GUIEventE
 * Demangled: Caver::TargetFrame::HideAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x00000000003E4378  Caver::TargetFrame::Update(float)
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000003E4B58 string=0x00000000003E4B5C ""
 *   insn=0x00000000003E4B64 string=0x00000000003E4B68 "h"
 *   insn=0x00000000003E4B68 string=0x00000000003E4B6C ""
 *   insn=0x00000000003E4B6C string=0x00000000003E4B70 "h"
 *   insn=0x00000000003E4B70 string=0x00000000003E4B74 "!"
 *   insn=0x00000000003E4B74 string=0x00000000003E4B78 "h"
 *   insn=0x00000000003E4B7C string=0x00000000003E4B80 "\t@"
 *   insn=0x00000000003E4B84 string=0x00000000003E4B88 "h\n@"
 *   insn=0x00000000003E4B88 string=0x00000000003E4B8C ""
 *   insn=0x00000000003E4B8C string=0x00000000003E4B90 "h\n"
 *   insn=0x00000000003E4B94 string=0x00000000003E4BA4 "h"
 *   insn=0x00000000003E4BB4 string=0x00000000003E4BB8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::HideAnimationFinished(__int64 result)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  v1 = *(_QWORD **)(result + 776);
  *(_BYTE *)(result + 228) = 1;
  *(_OWORD *)(result + 768) = 0u;
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

