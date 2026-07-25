/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A28BC
 * Mangled: _ZN5Caver9GUIWindow8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 29
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F3F30  Caver::RenderingContext::Clear(bool,bool,bool)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55B0  Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6450  Caver::GUIPopoverView::GUIPopoverView(void)
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7470  Caver::Texture::Texture(void)
 *   0x00000000001F8650  Caver::GUIView::DrawSubviewRect(Caver::GUIView*,Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001F9740  Caver::GUIView::FindAndSetSubviewFirstResponder(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FDD10  Caver::GUIPopoverView::PresentFromRectangle(Caver::Rectangle const&,uint)
 *   0x00000000001FF590  boost::shared_ptr<Caver::GUIPopoverView>::shared_ptr<Caver::GUIPopoverView>(Caver::GUIPopoverView *)
 *   0x0000000000200130  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>(boost::shared_ptr<Caver::GUIPopoverView> const*,Caver::GUIPopoverView *)
 *   0x0000000000200D60  Caver::Texture::Create(int,int,Caver::PixelFormat,float)
 *   0x0000000000201E80  Caver::RenderingContext::FramebufferForDrawingToTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000202770  Caver::RenderingContext::SetDepthTestEnabled(bool)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202EC0  Caver::GUIPopoverView::SetPopoverContentView(boost::shared_ptr<Caver::GUIView> const&)
 *   0x0000000000203490  Caver::RenderingContext::DrawTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x0000000000203620  Caver::RenderingContext::FillRect(Caver::Rectangle const&,Caver::Color const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9AC  sub_52A9AC
 *   0x000000000052A9C8  sub_52A9C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 197
 *   insn=0x00000000004A28D4 string=0x00000000004A28D8 "Y"
 *   insn=0x00000000004A28D8 string=0x00000000004A28DC "("
 *   insn=0x00000000004A28E0 string=0x00000000004A28E4 "\t"
 *   insn=0x00000000004A28E4 string=0x00000000004A28E8 "!EI"
 *   insn=0x00000000004A28E4 string=0x0000000000583944 "\n"
 *   insn=0x00000000004A28EC string=0x00000000004A28F0 "`"
 *   insn=0x00000000004A2904 string=0x00000000004A2908 "h"
 *   insn=0x00000000004A2904 string=0x00000000004A29A0 "h"
 *   insn=0x00000000004A2914 string=0x00000000004A2918 ""
 *   insn=0x00000000004A2920 string=0x00000000004A2924 ";R"
 *   insn=0x00000000004A2924 string=0x00000000001F7210 "0'"
 *   insn=0x00000000004A293C string=0x00000000001FC450 "0'"
 *   insn=0x00000000004A2944 string=0x00000000004A2948 ""
 *   insn=0x00000000004A2944 string=0x00000000001F3820 "P'"
 *   insn=0x00000000004A2948 string=0x00000000004A294C "`"
 *   insn=0x00000000004A2960 string=0x00000000004A2964 "\n"
 *   insn=0x00000000004A2964 string=0x00000000004A2968 "("
 *   insn=0x00000000004A2968 string=0x00000000004A296C "_"
 *   insn=0x00000000004A296C string=0x00000000004A2970 "I"
 *   insn=0x00000000004A2974 string=0x00000000004A2978 "a"
 *   insn=0x00000000004A2978 string=0x00000000004A297C ""
 *   insn=0x00000000004A2998 string=0x00000000004A299C "!"
 *   insn=0x00000000004A29A0 string=0x00000000004A29A4 "z"
 *   insn=0x00000000004A29A8 string=0x00000000004A29AC "`"
 *   insn=0x00000000004A29AC string=0x00000000004A29B0 "\t@"
 *   insn=0x00000000004A29B0 string=0x00000000004A29B4 "\t"
 *   insn=0x00000000004A29B4 string=0x00000000004A29B8 "!5G"
 *   insn=0x00000000004A29B4 string=0x0000000000583734 "o"
 *   insn=0x00000000004A29C4 string=0x00000000004A29C8 ""
 *   insn=0x00000000004A29C8 string=0x00000000004A29CC "h"
 *   insn=0x00000000004A29CC string=0x00000000004A29D0 "h"
 *   insn=0x00000000004A29D0 string=0x00000000004A29D4 "("
 *   insn=0x00000000004A29D4 string=0x00000000004A2AD8 "h"
 *   insn=0x00000000004A29E8 string=0x00000000001F9850 "0'"
 *   insn=0x00000000004A29EC string=0x00000000004A29F0 "h"
 *   insn=0x00000000004A29F0 string=0x00000000004A29F4 "X"
 *   insn=0x00000000004A29FC string=0x00000000004A2A78 "h"
 *   insn=0x00000000004A2A08 string=0x00000000004A2A0C ""
 *   insn=0x00000000004A2A20 string=0x00000000004A2A24 "W"
 *   insn=0x00000000004A2A24 string=0x00000000004A2A28 "7"
 *   insn=0x00000000004A2A24 string=0x00000000001F8650 "0'"
 *   insn=0x00000000004A2A2C string=0x00000000004A2A30 ""
 *   insn=0x00000000004A2A40 string=0x00000000004A2A44 "\t@"
 *   insn=0x00000000004A2A4C string=0x00000000004A2A50 ""
 *   insn=0x00000000004A2A60 string=0x00000000004A2A64 "@"
 *   insn=0x00000000004A2A6C string=0x00000000004A2A70 "_"
 *   insn=0x00000000004A2A70 string=0x00000000004A2A74 "a"
 *   insn=0x00000000004A2A7C string=0x00000000004A2A80 "h"
 *   insn=0x00000000004A2A7C string=0x00000000004A2AAC "("
 *   insn=0x00000000004A2A8C string=0x00000000004A2A90 ""
 *   insn=0x00000000004A2A9C string=0x00000000004A2AA0 "`"
 *   insn=0x00000000004A2AA8 string=0x00000000001F55B0 "P'"
 *   insn=0x00000000004A2AB8 string=0x00000000004A2D14 "oM"
 *   insn=0x00000000004A2AD8 string=0x00000000004A2ADC "w""
 *   insn=0x00000000004A2ADC string=0x00000000004A2AE0 "H"
 *   insn=0x00000000004A2AE0 string=0x00000000004A2B48 "`\nA"
 *   insn=0x00000000004A2AE8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A2AEC string=0x00000000004A2AF0 "`R"
 *   insn=0x00000000004A2AF0 string=0x00000000004A2AF4 "@"
 *   insn=0x00000000004A2AF0 string=0x00000000001F7470 "0'"
 *   insn=0x00000000004A2AF4 string=0x00000000004A2AF8 ""
 *   insn=0x00000000004A2AF8 string=0x00000000004A2AFC ""
 *   insn=0x00000000004A2B04 string=0x00000000004A2B08 " "
 *   insn=0x00000000004A2B08 string=0x00000000004A2B0C "@"
 *   insn=0x00000000004A2B08 string=0x00000000004A2B2C "a"
 *   insn=0x00000000004A2B0C string=0x00000000004A2B10 ""
 *   insn=0x00000000004A2B10 string=0x00000000004A2B14 ""
 *   insn=0x00000000004A2B18 string=0x00000000004A2B1C ""
 *   insn=0x00000000004A2B1C string=0x00000000004A2B20 ""
 *   insn=0x00000000004A2B38 string=0x00000000004A2B3C "!"
 *   insn=0x00000000004A2B3C string=0x00000000004A2B40 "B"
 *   insn=0x00000000004A2B4C string=0x00000000004A2B50 "h"
 *   insn=0x00000000004A2B50 string=0x00000000004A2B54 "h"
 *   insn=0x00000000004A2B54 string=0x00000000004A2B58 ""
 *   insn=0x00000000004A2B5C string=0x00000000004A2B60 "@"
 *   insn=0x00000000004A2B78 string=0x00000000004A2B7C "("
 *   insn=0x00000000004A2B78 string=0x00000000001F3F30 "P'"
 *   insn=0x00000000004A2B7C string=0x00000000004A2B80 "eB"
 *   insn=0x00000000004A2BA0 string=0x00000000004A2BA4 "+["
 *   insn=0x00000000004A2BA4 string=0x00000000004A2BA8 "`\nA"
 *   insn=0x00000000004A2BAC string=0x00000000004A2BB0 ""
 *   insn=0x00000000004A2BB0 string=0x00000000004A2BB4 ""
 *   insn=0x00000000004A2BC4 string=0x00000000004A2BC8 ""f"
 *   insn=0x00000000004A2BD8 string=0x00000000004A2BDC "GH"
 *   insn=0x00000000004A2BE8 string=0x00000000004A2BEC ""
 *   insn=0x00000000004A2C14 string=0x00000000004A2C18 "w"
 *   insn=0x00000000004A2C30 string=0x00000000004A2C34 "\n"
 *   insn=0x00000000004A2C30 string=0x00000000004A2C40 "x"
 *   insn=0x00000000004A2C34 string=0x00000000004A2C38 "J"
 *   insn=0x00000000004A2C38 string=0x00000000004A2C3C "\n"
 *   insn=0x00000000004A2C40 string=0x00000000004A2C44 "i\n"
 *   insn=0x00000000004A2C44 string=0x00000000004A2C48 "h"
 *   insn=0x00000000004A2C48 string=0x00000000004A2C4C "8"
 *   insn=0x00000000004A2C4C string=0x00000000004A2C50 "@"
 *   insn=0x00000000004A2C50 string=0x00000000004A2C54 ""
 *   insn=0x00000000004A2C54 string=0x00000000004A2C58 ""
 *   insn=0x00000000004A2C5C string=0x00000000004A2C60 ""
 *   insn=0x00000000004A2C60 string=0x00000000004A2C64 "\t@"
 *   insn=0x00000000004A2C6C string=0x00000000004A2C70 "@"
 *   insn=0x00000000004A2C70 string=0x00000000004A2C74 ""
 *   insn=0x00000000004A2C74 string=0x00000000004A2C78 ""
 *   insn=0x00000000004A2C7C string=0x00000000004A2C80 ""
 *   insn=0x00000000004A2C80 string=0x00000000004A2C84 "@"
 *   insn=0x00000000004A2C90 string=0x00000000004A2C94 "8"
 *   insn=0x00000000004A2C94 string=0x00000000004A2C98 "@"
 *   insn=0x00000000004A2C94 string=0x00000000004A2CD8 "`\nA"
 *   insn=0x00000000004A2C98 string=0x00000000004A2C9C ""
 *   insn=0x00000000004A2C9C string=0x00000000004A2CA0 ""
 *   insn=0x00000000004A2CA4 string=0x00000000004A2CA8 ""
 *   insn=0x00000000004A2CAC string=0x00000000004A2CB0 "\t@"
 *   insn=0x00000000004A2CB4 string=0x00000000004A2CB8 "@"
 *   insn=0x00000000004A2CB8 string=0x00000000004A2CBC ""
 *   insn=0x00000000004A2CBC string=0x00000000004A2CC0 ""
 *   insn=0x00000000004A2CC4 string=0x00000000004A2CC8 ""
 *   insn=0x00000000004A2CCC string=0x00000000004A2CD0 "@"
 *   insn=0x00000000004A2CDC string=0x00000000004A2CE0 ""
 *   insn=0x00000000004A2CE8 string=0x00000000004A2CEC "\t@"
 *   insn=0x00000000004A2CF0 string=0x00000000004A2CF4 "`\nA"
 *   insn=0x00000000004A2D0C string=0x00000000004A2D10 "9"
 *   insn=0x00000000004A2D14 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A2D1C string=0x00000000004A2D20 "4"
 *   insn=0x00000000004A2D24 string=0x00000000004A2D28 ""
 *   insn=0x00000000004A2D34 string=0x00000000004A2D38 "\t@"
 *   insn=0x00000000004A2D44 string=0x00000000004A2D48 ""
 *   insn=0x00000000004A2D54 string=0x00000000004A2D58 "@"
 *   insn=0x00000000004A2D6C string=0x00000000004A2D70 "PQ"
 *   insn=0x00000000004A2D70 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A2D7C string=0x00000000004A2D80 "7"
 *   insn=0x00000000004A2D84 string=0x00000000004A2D88 ""
 *   insn=0x00000000004A2D94 string=0x00000000004A2D98 "\t@"
 *   insn=0x00000000004A2DA4 string=0x00000000004A2DA8 ""
 *   insn=0x00000000004A2DB4 string=0x00000000004A2DB8 "@"
 *   insn=0x00000000004A2DC8 string=0x00000000004A2DCC "`"
 *   insn=0x00000000004A2DE4 string=0x00000000004A2DE8 "X"
 *   insn=0x00000000004A2DE8 string=0x00000000004A2DEC ""
 *   insn=0x00000000004A2E10 string=0x00000000001F6450 "0'"
 *   insn=0x00000000004A2E24 string=0x00000000004A2E28 "1@"
 *   insn=0x00000000004A2E30 string=0x00000000004A2E34 "*"
 *   insn=0x00000000004A2E34 string=0x00000000004A2E38 "J"
 *   insn=0x00000000004A2E38 string=0x00000000004A2E3C "*"
 *   insn=0x00000000004A2E4C string=0x00000000004A2E50 "7"
 *   insn=0x00000000004A2E54 string=0x00000000004A2E58 ""
 *   insn=0x00000000004A2E64 string=0x00000000004A2E68 "\t@"
 *   insn=0x00000000004A2E74 string=0x00000000004A2E78 ""
 *   insn=0x00000000004A2E84 string=0x00000000004A2E88 "@"
 *   insn=0x00000000004A2EA8 string=0x000000000052A9AC """
 *   insn=0x00000000004A2EC4 string=0x00000000004A2EC8 "`"
 *   insn=0x00000000004A2EC4 string=0x00000000001FDD10 "0'"
 *   insn=0x00000000004A2ECC string=0x00000000001F9740 "0'"
 *   insn=0x00000000004A2ED4 string=0x00000000004A2ED8 ""
 *   insn=0x00000000004A2ED8 string=0x00000000004A2EDC "e@"
 *   insn=0x00000000004A2EE4 string=0x00000000004A2EE8 "3"
 *   insn=0x00000000004A2EE8 string=0x00000000004A2EEC "h"
 *   insn=0x00000000004A2EE8 string=0x00000000004A2F2C ""
 *   insn=0x00000000004A2EEC string=0x00000000004A2EF0 ""
 *   insn=0x00000000004A2EF0 string=0x00000000004A2EF4 "h"
 *   insn=0x00000000004A2EF8 string=0x00000000004A2EFC "h"
 *   insn=0x00000000004A2F00 string=0x00000000004A2F04 "\t@"
 *   insn=0x00000000004A2F08 string=0x00000000004A2F0C "h\n@"
 *   insn=0x00000000004A2F0C string=0x00000000004A2F10 ""
 *   insn=0x00000000004A2F10 string=0x00000000004A2F14 "h\n"
 *   insn=0x00000000004A2F18 string=0x00000000004A2F1C "h"
 *   insn=0x00000000004A2F20 string=0x00000000004A2F24 "@"
 *   insn=0x00000000004A2F6C string=0x00000000004A2F70 ""
 *   insn=0x00000000004A2F7C string=0x00000000004A2F80 "\t@"
 *   insn=0x00000000004A2F8C string=0x00000000004A2F90 ""
 *   insn=0x00000000004A2F9C string=0x00000000004A2FA0 "@"
 *   insn=0x00000000004A2FA8 string=0x00000000004A2FAC ""
 *   insn=0x00000000004A2FBC string=0x00000000004A2FC0 "Az"
 *   insn=0x00000000004A2FC8 string=0x00000000004A2FCC "4"
 *   insn=0x00000000004A2FD0 string=0x00000000004A2FD4 ""
 *   insn=0x00000000004A2FE0 string=0x00000000004A2FE4 "\t@"
 *   insn=0x00000000004A2FF0 string=0x00000000004A2FF4 ""
 *   insn=0x00000000004A3000 string=0x00000000004A3004 "@"
 *   insn=0x00000000004A3010 string=0x00000000004A3014 ",z"
 *   insn=0x00000000004A3034 string=0x00000000004A3038 "jI"
 *   insn=0x00000000004A3038 string=0x00000000004A303C ")"
 *   insn=0x00000000004A303C string=0x00000000004A3040 ")"
 *   insn=0x00000000004A304C string=0x00000000004A3050 "(A"
 *   insn=0x00000000004A3054 string=0x00000000004A3058 ""
 *   insn=0x00000000004A3060 string=0x00000000004A3064 "`""
 *   insn=0x00000000004A306C string=0x00000000004A3070 "0t"
 *   insn=0x00000000004A3084 string=0x00000000004A3088 "4"
 *   insn=0x00000000004A308C string=0x00000000004A3090 ""
 *   insn=0x00000000004A309C string=0x00000000004A30A0 "\t@"
 *   insn=0x00000000004A30AC string=0x00000000004A30B0 ""
 *   insn=0x00000000004A30BC string=0x00000000004A30C0 "@"
 *   insn=0x00000000004A30D4 string=0x00000000004A30D8 "BE"
 *   insn=0x00000000004A30D8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004A30DC string=0x00000000004A30E0 "h"
 *   insn=0x00000000004A30E0 string=0x00000000004A30E4 "!@"
 *   insn=0x00000000004A30F4 string=0x00000000004A30F8 "&i"
 *   insn=0x00000000004A30F8 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004A3124 string=0x00000000004A3154 "h"
 *   insn=0x00000000004A3138 string=0x00000000004A313C "#"
 *   insn=0x00000000004A3140 string=0x00000000004A3144 "[P"
 *   insn=0x00000000004A3168 string=0x00000000004A316C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIWindow::DrawRect(
        Caver::GUIWindow *this,
        Caver::RenderingContext *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4)
{
  float v7; // s0
  int v8; // w8
  char v9; // w9
  _QWORD *v10; // x8
  _QWORD *v11; // x26
  __int64 v12; // x8
  _QWORD *v13; // x24
  _QWORD *v14; // x23
  __int64 v15; // x8
  __int64 v16; // x8
  Caver::Texture **v17; // x23
  Caver::Texture *v18; // x24
  Caver::Texture *v19; // x0
  int v20; // w8
  __int64 v21; // x0
  __int128 v22; // kr00_16
  _QWORD *v23; // x24
  __int64 v24; // x8
  __int64 v25; // x8
  _QWORD *v26; // x24
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x0
  _OWORD v30[4]; // [xsp+A0h] [xbp-90h] BYREF
  __int64 v31; // [xsp+E8h] [xbp-48h]

  v31 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((float *)this + 118) > 0.01 )
  {
    (*(void (__fastcall **)(Caver::GUIWindow *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this
                                                                                                  + 296LL))(
      this,
      a2,
      a4);
    Caver::RenderingContext::SetIdentityMatrix(a2);
    Caver::RenderingContext::SetDepthTestEnabled(a2, 0);
    Caver::RenderingContext::SetBlendingEnabled(a2, 1);
    Caver::RenderingContext::SetDefaultBlendFunc(a2);
    v7 = *((float *)this + 118);
    v8 = (int)(float)(v7 * 0.0);
    if ( (int)(float)(v7 * 255.0) >= 255 )
      v9 = -1;
    else
      v9 = (int)(float)(v7 * 255.0);
    if ( v8 >= 255 )
      LOBYTE(v8) = -1;
    LOBYTE(v30[0]) = v8;
    BYTE1(v30[0]) = v8;
    BYTE2(v30[0]) = v8;
    BYTE3(v30[0]) = v9;
    Caver::RenderingContext::FillRect(a2, (Caver::GUIWindow *)((char *)this + 132), (const Caver::Color *)v30, 0.0);
  }
  v10 = (_QWORD *)*((_QWORD *)this + 56);
  v11 = (_QWORD *)((char *)this + 448);
  if ( v10 == (_QWORD *)((char *)this + 448)
    || (v12 = v10[2], *(float *)(v12 + 508) > 0.001)
    || *(_BYTE *)(v12 + 504)
    || *((_QWORD *)this + 58) )
  {
    Caver::GUIView::DrawRect();
    *((_BYTE *)this + 544) = 1;
  }
  else
  {
    v17 = (Caver::Texture **)((char *)this + 520);
    if ( !*((_QWORD *)this + 65) )
    {
      v18 = (Caver::Texture *)operator new(0xA8u);
      Caver::Texture::Texture(v18);
      ++*((_DWORD *)v18 + 2);
      v19 = *v17;
      *v17 = v18;
      if ( v19 )
      {
        v20 = *((_DWORD *)v19 + 2) - 1;
        *((_DWORD *)v19 + 2) = v20;
        if ( !v20 )
          (*(void (__fastcall **)(Caver::Texture *))(*(_QWORD *)v19 + 8LL))(v19);
      }
      Caver::Texture::Create();
    }
    v21 = *((_QWORD *)this + 66);
    if ( v21 )
      goto LABEL_48;
    Caver::RenderingContext::FramebufferForDrawingToTexture();
    v22 = v30[0];
    if ( *((_QWORD *)&v30[0] + 1) )
      ++*(_QWORD *)(*((_QWORD *)&v30[0] + 1) + 8LL);
    v23 = (_QWORD *)*((_QWORD *)this + 67);
    *((_OWORD *)this + 33) = v22;
    if ( v23 )
    {
      v24 = v23[1] - 1LL;
      v23[1] = v24;
      if ( !v24 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
        v25 = v23[2] - 1LL;
        v23[2] = v25;
        if ( !v25 )
          (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
      }
    }
    v26 = (_QWORD *)*((_QWORD *)&v30[0] + 1);
    if ( *((_QWORD *)&v30[0] + 1) )
    {
      v27 = *(_QWORD *)(*((_QWORD *)&v30[0] + 1) + 8LL) - 1LL;
      *(_QWORD *)(*((_QWORD *)&v30[0] + 1) + 8LL) = v27;
      if ( !v27 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
        v28 = v26[2] - 1LL;
        v26[2] = v28;
        if ( !v28 )
          (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
      }
    }
    v29 = *((_QWORD *)this + 66);
    if ( v29
      && ((*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v29 + 16LL))(v29, 1, 0),
          (v21 = *((_QWORD *)this + 66)) != 0) )
    {
LABEL_48:
      if ( *((_BYTE *)this + 544) )
      {
        (*(void (__fastcall **)(__int64, Caver::RenderingContext *))(*(_QWORD *)v21 + 24LL))(v21, a2);
        Caver::RenderingContext::Clear(a2, 1, 1, 0);
        v30[2] = xmmword_6E9F10;
        v30[3] = xmmword_6E9F20;
        v30[0] = Caver::Matrix4::identityMatrix;
        v30[1] = xmmword_6E9F00;
        Caver::GUIView::DrawRect();
        (*(void (__fastcall **)(_QWORD, Caver::RenderingContext *))(**((_QWORD **)this + 66) + 32LL))(
          *((_QWORD *)this + 66),
          a2);
        *((_BYTE *)this + 544) = 0;
      }
      Caver::RenderingContext::SetBlendingEnabled(a2, 0);
      Caver::RenderingContext::SetDepthTestEnabled(a2, 0);
      (*(void (__fastcall **)(Caver::GUIWindow *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this + 296LL))(
        this,
        a2,
        a4);
      Caver::RenderingContext::SetIdentityMatrix(a2);
      v30[0] = 0u;
      Caver::RenderingContext::DrawTexture();
    }
    else
    {
      Caver::GUIView::DrawRect();
    }
  }
  v13 = (_QWORD *)*v11;
  if ( (_QWORD *)*v11 != v11 )
  {
    do
    {
      v14 = (_QWORD *)v13[3];
      if ( v14 )
        ++v14[1];
      Caver::GUIView::DrawSubviewRect();
      if ( v14 )
      {
        v15 = v14[1] - 1LL;
        v14[1] = v15;
        if ( !v15 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
          v16 = v14[2] - 1LL;
          v14[2] = v16;
          if ( !v16 )
            (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
        }
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v11 != v13 );
  }
  if ( *((_QWORD *)this + 61) )
  {
    (*(void (__fastcall **)(Caver::GUIWindow *, Caver::RenderingContext *, const Caver::Matrix4 *))(*(_QWORD *)this
                                                                                                  + 296LL))(
      this,
      a2,
      a4);
    Caver::RenderingContext::SetIdentityMatrix(a2);
    Caver::GUIEffect::Draw(*((Caver::GUIEffect **)this + 61), a2);
  }
}

