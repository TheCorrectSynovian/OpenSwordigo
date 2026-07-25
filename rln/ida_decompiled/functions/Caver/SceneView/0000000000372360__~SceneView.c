/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000372360
 * Mangled: _ZN5Caver9SceneViewD2Ev
 * Demangled: Caver::SceneView::~SceneView()
 *
 * Callers: 1
 *   0x0000000000200160  Caver::SceneView::~SceneView()
 *
 * Callees: 7
 *   0x00000000001F5020  Caver::CameraController::~CameraController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000200160  Caver::SceneView::~SceneView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000372488  Caver::SkillPickerViewController::SkillPickerViewController(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x0000000000372370 string=0x0000000000372374 "9E"
 *   insn=0x0000000000372378 string=0x000000000037237C "`"
 *   insn=0x000000000037237C string=0x0000000000372380 "A"
 *   insn=0x0000000000372380 string=0x0000000000372384 "h"
 *   insn=0x0000000000372384 string=0x0000000000372388 "&"
 *   insn=0x0000000000372388 string=0x000000000037238C "t~@"
 *   insn=0x0000000000372388 string=0x00000000001F5020 "P'"
 *   insn=0x000000000037238C string=0x0000000000372390 "4"
 *   insn=0x0000000000372394 string=0x0000000000372398 ""
 *   insn=0x00000000003723A4 string=0x00000000003723A8 "\t@"
 *   insn=0x00000000003723B4 string=0x00000000003723B8 ""
 *   insn=0x00000000003723C4 string=0x00000000003723C8 "@"
 *   insn=0x00000000003723F4 string=0x00000000003723F8 "5"
 *   insn=0x00000000003723FC string=0x0000000000372400 ""
 *   insn=0x000000000037240C string=0x0000000000372410 "\t@"
 *   insn=0x000000000037241C string=0x0000000000372420 ""
 *   insn=0x000000000037242C string=0x0000000000372430 "@"
 *   insn=0x000000000037243C string=0x0000000000372440 "|2"
 *   insn=0x000000000037245C string=0x0000000000372460 "@7"
 *   insn=0x0000000000372470 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SceneView::~SceneView(Caver::SceneView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  *(_QWORD *)this = off_6CCC50;
  Caver::CameraController::~CameraController((Caver::SceneView *)((char *)this + 256));
  v2 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::GUIView::~GUIView(this);
}

