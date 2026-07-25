/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A3E0C
 * Mangled: _ZN5Caver9GUIWindow10BeginTouchERKNS_7FWTouchE
 * Demangled: Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Callers: 2
 *   0x00000000001FFA90  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Callees: 15
 *   0x00000000001F38C0  Caver::GUIApplication::sharedApplication(void)
 *   0x00000000001F3E80  Caver::GUIWindow::CancelTouch(Caver::FWTouch const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6840  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::erase(ulong const&)
 *   0x00000000001F6C60  Caver::FWTouch::operator=(Caver::FWTouch const&)
 *   0x00000000001F6E10  std::map<ulong,boost::shared_ptr<Caver::GUIView>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::operator[](ulong const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8680  std::map<ulong,Caver::FWTouch,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::operator[](ulong const&)
 *   0x00000000001FDA40  Caver::GUIView::ConvertPointToView(Caver::Vector2 const&,Caver::GUIView*)
 *   0x00000000001FFA90  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x0000000000203BF0  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9C8  sub_52A9C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 179
 *   insn=0x00000000004A3E28 string=0x00000000004A3E2C "["
 *   insn=0x00000000004A3E2C string=0x00000000004A3E30 "h"
 *   insn=0x00000000004A3E40 string=0x00000000004A3E44 "("
 *   insn=0x00000000004A3E44 string=0x00000000004A3E68 "h"
 *   insn=0x00000000004A3E50 string=0x00000000004A3E54 " "
 *   insn=0x00000000004A3E74 string=0x00000000004A420C "1H"
 *   insn=0x00000000004A3E98 string=0x00000000004A3E9C "h"
 *   insn=0x00000000004A3E98 string=0x00000000001F38C0 "P'"
 *   insn=0x00000000004A3EA0 string=0x00000000004A3EA4 "("
 *   insn=0x00000000004A3EAC string=0x00000000004A3EB0 "@\n"
 *   insn=0x00000000004A3EB4 string=0x00000000004A3EB8 "t""
 *   insn=0x00000000004A3EC0 string=0x00000000004A3EC4 ""
 *   insn=0x00000000004A3EDC string=0x00000000001FDA40 "0'"
 *   insn=0x00000000004A3EF4 string=0x00000000004A3F04 "9"
 *   insn=0x00000000004A3EF8 string=0x00000000004A3EFC ""
 *   insn=0x00000000004A3F04 string=0x00000000004A3F08 "(@"
 *   insn=0x00000000004A3F08 string=0x00000000004A3F0C ""
 *   insn=0x00000000004A3F0C string=0x00000000004A3F10 "("
 *   insn=0x00000000004A3F14 string=0x00000000004A3F18 "("
 *   insn=0x00000000004A3F18 string=0x00000000004A3F1C "\t@"
 *   insn=0x00000000004A3F24 string=0x00000000004A3F28 "(@"
 *   insn=0x00000000004A3F28 string=0x00000000004A3F2C ""
 *   insn=0x00000000004A3F2C string=0x00000000004A3F30 "("
 *   insn=0x00000000004A3F34 string=0x00000000004A3F38 "("
 *   insn=0x00000000004A3F38 string=0x00000000004A3F3C "@"
 *   insn=0x00000000004A3F48 string=0x00000000004A3F4C "z"
 *   insn=0x00000000004A3F4C string=0x00000000004A3F50 "H@"
 *   insn=0x00000000004A3F4C string=0x00000000004A3F98 "v\t"
 *   insn=0x00000000004A3F50 string=0x00000000004A3F54 ""
 *   insn=0x00000000004A3F54 string=0x00000000004A3F58 "H"
 *   insn=0x00000000004A3F5C string=0x00000000004A3F60 "H"
 *   insn=0x00000000004A3F64 string=0x00000000004A3F68 "\t@"
 *   insn=0x00000000004A3F70 string=0x00000000004A3F74 "H@"
 *   insn=0x00000000004A3F74 string=0x00000000004A3F78 ""
 *   insn=0x00000000004A3F78 string=0x00000000004A3F7C "H"
 *   insn=0x00000000004A3F80 string=0x00000000004A3F84 "H"
 *   insn=0x00000000004A3F88 string=0x00000000004A3F8C "@"
 *   insn=0x00000000004A3FA4 string=0x00000000004A3FD4 ""
 *   insn=0x00000000004A3FC4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A3FD4 string=0x00000000004A3FD8 "=@"
 *   insn=0x00000000004A3FEC string=0x00000000004A3FF0 "a"
 *   insn=0x00000000004A3FFC string=0x00000000004A4000 "a""
 *   insn=0x00000000004A4000 string=0x00000000004A4004 "\tu@"
 *   insn=0x00000000004A400C string=0x00000000004A4010 " "
 *   insn=0x00000000004A4018 string=0x00000000004A4028 "7"
 *   insn=0x00000000004A401C string=0x00000000004A4020 ""
 *   insn=0x00000000004A402C string=0x00000000004A4030 ""
 *   insn=0x00000000004A403C string=0x00000000004A4040 "\t@"
 *   insn=0x00000000004A404C string=0x00000000004A4050 ""
 *   insn=0x00000000004A405C string=0x00000000004A4060 "@"
 *   insn=0x00000000004A406C string=0x00000000004A4070 "x"
 *   insn=0x00000000004A4070 string=0x00000000004A4074 "@"
 *   insn=0x00000000004A4070 string=0x00000000004A40BC "v"
 *   insn=0x00000000004A4074 string=0x00000000004A4078 ""
 *   insn=0x00000000004A4078 string=0x00000000004A407C ""
 *   insn=0x00000000004A4080 string=0x00000000004A4084 ""
 *   insn=0x00000000004A4088 string=0x00000000004A408C "\t@"
 *   insn=0x00000000004A4094 string=0x00000000004A4098 "@"
 *   insn=0x00000000004A4098 string=0x00000000004A409C ""
 *   insn=0x00000000004A409C string=0x00000000004A40A0 ""
 *   insn=0x00000000004A40A4 string=0x00000000004A40A8 ""
 *   insn=0x00000000004A40AC string=0x00000000004A40B0 "@"
 *   insn=0x00000000004A40BC string=0x00000000004A40C0 "A"
 *   insn=0x00000000004A40BC string=0x00000000004A40C8 "h"
 *   insn=0x00000000004A40C0 string=0x00000000004A41C4 "4"
 *   insn=0x00000000004A40D4 string=0x00000000004A40D8 "jQ"
 *   insn=0x00000000004A40D8 string=0x00000000001F8680 "0'"
 *   insn=0x00000000004A40E0 string=0x00000000004A40E4 "h"
 *   insn=0x00000000004A40E0 string=0x00000000001F6C60 "0'"
 *   insn=0x00000000004A40F0 string=0x00000000004A40F4 "GK"
 *   insn=0x00000000004A40F4 string=0x00000000001F6E10 "0'"
 *   insn=0x00000000004A40FC string=0x00000000004A4100 ""
 *   insn=0x00000000004A410C string=0x00000000004A4110 "5"
 *   insn=0x00000000004A4114 string=0x00000000004A4118 ""
 *   insn=0x00000000004A4124 string=0x00000000004A4128 "\t@"
 *   insn=0x00000000004A4134 string=0x00000000004A4138 ""
 *   insn=0x00000000004A4144 string=0x00000000004A4148 "@"
 *   insn=0x00000000004A4158 string=0x00000000004A415C "a@"
 *   insn=0x00000000004A4164 string=0x00000000004A4168 "`"
 *   insn=0x00000000004A41A0 string=0x00000000004A41A4 "e@"
 *   insn=0x00000000004A41B0 string=0x00000000004A41B4 ""
 *   insn=0x00000000004A41C8 string=0x00000000004A41CC ""
 *   insn=0x00000000004A41DC string=0x00000000004A41E0 "\t@"
 *   insn=0x00000000004A41E8 string=0x00000000004A41EC ""
 *   insn=0x00000000004A41FC string=0x00000000004A4200 "@"
 *   insn=0x00000000004A420C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A4214 string=0x00000000004A4218 "S"
 *   insn=0x00000000004A4228 string=0x00000000004A422C ""
 *   insn=0x00000000004A4238 string=0x00000000004A423C "\t@"
 *   insn=0x00000000004A4248 string=0x00000000004A424C ""
 *   insn=0x00000000004A4258 string=0x00000000004A425C "@"
 *   insn=0x00000000004A4264 string=0x00000000004A4268 "#"
 *   insn=0x00000000004A4270 string=0x00000000004A4274 "<"
 *   insn=0x00000000004A4278 string=0x00000000004A427C "T"
 *   insn=0x00000000004A427C string=0x00000000004A4280 "9"
 *   insn=0x00000000004A428C string=0x00000000004A4290 "5"
 *   insn=0x00000000004A4298 string=0x00000000004A429C "4"
 *   insn=0x00000000004A42A0 string=0x00000000004A42A4 ""
 *   insn=0x00000000004A42B0 string=0x00000000004A42B4 "\t@"
 *   insn=0x00000000004A42C0 string=0x00000000004A42C4 ""
 *   insn=0x00000000004A42D0 string=0x00000000004A42D4 "@"
 *   insn=0x00000000004A42F4 string=0x00000000004A42F8 ""
 *   insn=0x00000000004A42FC string=0x00000000004A4300 "4"
 *   insn=0x00000000004A431C string=0x00000000004A4320 "4"
 *   insn=0x00000000004A4324 string=0x00000000004A4328 ""
 *   insn=0x00000000004A4334 string=0x00000000004A4338 "\t@"
 *   insn=0x00000000004A4344 string=0x00000000004A4348 ""
 *   insn=0x00000000004A4354 string=0x00000000004A4358 "@"
 *   insn=0x00000000004A4364 string=0x00000000004A4368 "Wu"
 *   insn=0x00000000004A4380 string=0x00000000004A4384 "V"
 *   insn=0x00000000004A4398 string=0x00000000004A439C "("
 *   insn=0x00000000004A43AC string=0x00000000004A43E4 "7="
 *   insn=0x00000000004A43C8 string=0x00000000004A43CC "!\t"
 *   insn=0x00000000004A43CC string=0x00000000004A44F0 "xG"
 *   insn=0x00000000004A43E4 string=0x00000000004A43E8 "h"
 *   insn=0x00000000004A43EC string=0x00000000004A43F0 "("
 *   insn=0x00000000004A43F0 string=0x00000000004A43F4 "h"
 *   insn=0x00000000004A4408 string=0x00000000004A440C "a""
 *   insn=0x00000000004A4410 string=0x00000000004A4414 "\tu@"
 *   insn=0x00000000004A4418 string=0x00000000004A441C " "
 *   insn=0x00000000004A4430 string=0x00000000004A4434 "\t"
 *   insn=0x00000000004A4430 string=0x00000000004A4460 ""
 *   insn=0x00000000004A4434 string=0x00000000004A4438 "\t"
 *   insn=0x00000000004A4444 string=0x00000000001F3E80 "P'"
 *   insn=0x00000000004A4450 string=0x00000000004A4454 ""
 *   insn=0x00000000004A4458 string=0x00000000004A445C "h"
 *   insn=0x00000000004A4460 string=0x00000000004A4464 "y@"
 *   insn=0x00000000004A4470 string=0x00000000004A4474 ""
 *   insn=0x00000000004A4478 string=0x00000000004A44D4 ""
 *   insn=0x00000000004A448C string=0x00000000004A4490 "h"
 *   insn=0x00000000004A4490 string=0x00000000004A4494 ""
 *   insn=0x00000000004A4494 string=0x00000000004A4498 "h"
 *   insn=0x00000000004A4498 string=0x00000000004A449C "!"
 *   insn=0x00000000004A449C string=0x00000000004A44A0 "h"
 *   insn=0x00000000004A44A4 string=0x00000000004A44A8 "\t@"
 *   insn=0x00000000004A44AC string=0x00000000004A44B0 "h\n@"
 *   insn=0x00000000004A44B0 string=0x00000000004A44B4 ""
 *   insn=0x00000000004A44B4 string=0x00000000004A44B8 "h\n"
 *   insn=0x00000000004A44B8 string=0x00000000004A44BC "!"
 *   insn=0x00000000004A44BC string=0x00000000004A44C0 "h"
 *   insn=0x00000000004A44C4 string=0x00000000004A44C8 "@"
 *   insn=0x00000000004A44D4 string=0x00000000004A44D8 "("
 *   insn=0x00000000004A44D8 string=0x00000000004A44DC ""
 *   insn=0x00000000004A44DC string=0x00000000004A44E0 ""
 *   insn=0x00000000004A44F8 string=0x00000000004A44FC "4"
 *   insn=0x00000000004A4500 string=0x00000000004A4504 ""
 *   insn=0x00000000004A4510 string=0x00000000004A4514 "\t@"
 *   insn=0x00000000004A4520 string=0x00000000004A4524 ""
 *   insn=0x00000000004A4530 string=0x00000000004A4534 "@"
 *   insn=0x00000000004A455C string=0x00000000004A4560 "V"
 *   insn=0x00000000004A4590 string=0x00000000004A4594 ")"
 *   insn=0x00000000004A45A4 string=0x00000000004A45A8 "("
 *   insn=0x00000000004A45C0 string=0x00000000004A45C4 ""
 *   insn=0x00000000004A45C8 string=0x00000000004A45CC "@"
 *   insn=0x00000000004A45E4 string=0x00000000001F6840 "0'"
 *   insn=0x00000000004A45F4 string=0x00000000004A45F8 ")"
 *   insn=0x00000000004A45F8 string=0x00000000004A45FC "?"
 *   insn=0x00000000004A4600 string=0x00000000004A4604 "*"
 *   insn=0x00000000004A4600 string=0x00000000004A4614 "*@"
 *   insn=0x00000000004A4608 string=0x00000000004A460C "j"
 *   insn=0x00000000004A460C string=0x00000000004A4610 ""
 *   insn=0x00000000004A461C string=0x00000000004A465C ")"
 *   insn=0x00000000004A4630 string=0x00000000004A4634 "o}"
 *   insn=0x00000000004A4640 string=0x00000000004A4644 "A"
 *   insn=0x00000000004A4644 string=0x00000000004A46AC "\tG"
 *   insn=0x00000000004A465C string=0x00000000004A4660 "*"
 *   insn=0x00000000004A4660 string=0x00000000004A4664 "K"
 *   insn=0x00000000004A4660 string=0x00000000004A4684 "i"
 *   insn=0x00000000004A4664 string=0x00000000004A4668 "La"
 *   insn=0x00000000004A4668 string=0x00000000004A466C "MA"
 *   insn=0x00000000004A4674 string=0x00000000004A4678 "!0"
 *   insn=0x00000000004A4678 string=0x00000000004A467C "j"
 *   insn=0x00000000004A467C string=0x00000000004A4680 "*"
 *   insn=0x00000000004A4684 string=0x00000000004A4688 "*"
 *   insn=0x00000000004A4688 string=0x00000000004A468C "+a"
 *   insn=0x00000000004A468C string=0x00000000004A4690 ",A"
 *   insn=0x00000000004A4698 string=0x00000000004A469C ""1"
 *   insn=0x00000000004A469C string=0x00000000004A46A0 "I"
 *   insn=0x00000000004A46A0 string=0x00000000004A46A4 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIView *__fastcall Caver::GUIWindow::BeginTouch(Caver::GUIView *this, const Caver::FWTouch *a2)
{
  Caver::GUIView *v2; // x21
  _QWORD **v4; // x28
  __int64 v5; // x0
  const Caver::GUIView *v6; // x25
  Caver::GUIView *v7; // x24
  void (__fastcall *v8)(const Caver::GUIView **__return_ptr, Caver::GUIView *, __int64 *); // x22
  const Caver::GUIView *v9; // x22
  const Caver::GUIView *v10; // x23
  __int64 v11; // x8
  __int64 v12; // x8
  const Caver::GUIView *v13; // x26
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x22
  _QWORD *v17; // x25
  const Caver::GUIView *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  const Caver::GUIView *v21; // x24
  __int64 v22; // x8
  __int64 v23; // x8
  const Caver::GUIView **v24; // x0
  const Caver::GUIView *v25; // x21
  __int64 v26; // x8
  __int64 v27; // x8
  const Caver::GUIView *v28; // x21
  __int64 (__fastcall *v29)(const Caver::GUIView *, const Caver::GUIView **); // x23
  __int64 v30; // x8
  __int64 v31; // x8
  __int64 v32; // [xsp+90h] [xbp-70h] BYREF
  const Caver::GUIView *v33; // [xsp+98h] [xbp-68h] BYREF
  const Caver::GUIView *v34; // [xsp+A0h] [xbp-60h]
  __int64 v35; // [xsp+A8h] [xbp-58h]

  v2 = this;
  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 229) )
    return this;
  if ( *((Caver::GUIView **)this + 56) != (Caver::GUIView *)((char *)this + 448) )
    return (Caver::GUIView *)Caver::GUIWindow::BeginTouch(*(Caver::GUIWindow **)(*((_QWORD *)this + 57) + 16LL), a2);
  Caver::GUIApplication::sharedApplication(this);
  v4 = (_QWORD **)((char *)v2 + 432);
  *(_QWORD *)(v5 + 80) = *((_QWORD *)a2 + 3);
  if ( *((Caver::GUIView **)v2 + 54) == (Caver::GUIView *)((char *)v2 + 432) )
  {
    v10 = 0;
LABEL_25:
    this = (Caver::GUIView *)(*(_QWORD *(__fastcall **)(const Caver::GUIView **__return_ptr, Caver::GUIView *, char *))(*(_QWORD *)v2 + 232LL))(
                               &v33,
                               v2,
                               (char *)a2 + 8);
    v9 = v33;
    v18 = v34;
    if ( v34 )
      ++*((_QWORD *)v34 + 1);
    if ( v10 )
    {
      v19 = *((_QWORD *)v10 + 1) - 1LL;
      *((_QWORD *)v10 + 1) = v19;
      if ( !v19 )
      {
        this = (Caver::GUIView *)(*(__int64 (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v10 + 16LL))(v10);
        v20 = *((_QWORD *)v10 + 2) - 1LL;
        *((_QWORD *)v10 + 2) = v20;
        if ( !v20 )
          this = (Caver::GUIView *)(*(__int64 (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v10 + 24LL))(v10);
      }
    }
    v21 = v34;
    if ( v34 )
    {
      v22 = *((_QWORD *)v34 + 1) - 1LL;
      *((_QWORD *)v34 + 1) = v22;
      if ( !v22 )
      {
        this = (Caver::GUIView *)(*(__int64 (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v21 + 16LL))(v21);
        v23 = *((_QWORD *)v21 + 2) - 1LL;
        *((_QWORD *)v21 + 2) = v23;
        if ( !v23 )
          this = (Caver::GUIView *)(*(__int64 (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v21 + 24LL))(v21);
      }
    }
    if ( !v9 )
      goto LABEL_51;
  }
  else
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = *(Caver::GUIView **)(*((_QWORD *)v2 + 55) + 16LL);
      v8 = *(void (__fastcall **)(const Caver::GUIView **__return_ptr, Caver::GUIView *, __int64 *))(*(_QWORD *)v7 + 232LL);
      Caver::GUIView::ConvertPointToView(&v32, v2, (const Caver::FWTouch *)((char *)a2 + 8), v7);
      v8(&v33, v7, &v32);
      v9 = v33;
      v10 = v34;
      if ( v34 )
        ++*((_QWORD *)v34 + 1);
      if ( v6 )
      {
        v11 = *((_QWORD *)v6 + 1) - 1LL;
        *((_QWORD *)v6 + 1) = v11;
        if ( !v11 )
        {
          (*(void (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v6 + 16LL))(v6);
          v12 = *((_QWORD *)v6 + 2) - 1LL;
          *((_QWORD *)v6 + 2) = v12;
          if ( !v12 )
            (*(void (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v6 + 24LL))(v6);
        }
      }
      v13 = v34;
      if ( v34 )
      {
        v14 = *((_QWORD *)v34 + 1) - 1LL;
        *((_QWORD *)v34 + 1) = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v13 + 16LL))(v13);
          v15 = *((_QWORD *)v13 + 2) - 1LL;
          *((_QWORD *)v13 + 2) = v15;
          if ( !v15 )
            (*(void (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v13 + 24LL))(v13);
        }
      }
      if ( v9 )
        break;
      v16 = *v4;
      if ( v4 != *v4 )
      {
        do
        {
          v17 = (_QWORD *)*v16;
          if ( (Caver::GUIView *)v16[2] == v7 )
          {
            sub_52A9C8(v16);
            operator delete(v16);
          }
          v16 = v17;
        }
        while ( v4 != v17 );
      }
      (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v7 + 120LL))(v7);
      v6 = v10;
      if ( *v4 == v4 )
        goto LABEL_25;
    }
    v18 = v10;
  }
  v33 = *(const Caver::GUIView **)a2;
  std::map<unsigned long,Caver::FWTouch>::operator[]();
  Caver::FWTouch::operator=();
  v33 = *(const Caver::GUIView **)a2;
  std::map<unsigned long,boost::shared_ptr<Caver::GUIView>>::operator[]();
  if ( v18 )
    ++*((_QWORD *)v18 + 1);
  v25 = v24[1];
  *v24 = v9;
  v24[1] = v18;
  if ( v25 )
  {
    v26 = *((_QWORD *)v25 + 1) - 1LL;
    *((_QWORD *)v25 + 1) = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v25 + 16LL))(v25);
      v27 = *((_QWORD *)v25 + 2) - 1LL;
      *((_QWORD *)v25 + 2) = v27;
      if ( !v27 )
        (*(void (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v25 + 24LL))(v25);
    }
  }
  v28 = v9;
  while ( 1 )
  {
    if ( ((*(__int64 (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v28 + 192LL))(v28) & 1) != 0 )
    {
      v29 = *(__int64 (__fastcall **)(const Caver::GUIView *, const Caver::GUIView **))(*(_QWORD *)v28 + 224LL);
      Caver::FWTouch::LocationInView((__int64 *)&v33, a2, v28);
      if ( (v29(v28, &v33) & 1) != 0 )
        break;
    }
    v28 = (const Caver::GUIView *)*((_QWORD *)v28 + 11);
    if ( !v28 )
      goto LABEL_50;
  }
  (*(void (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v28 + 200LL))(v28);
LABEL_50:
  this = (Caver::GUIView *)(**(__int64 (__fastcall ***)(const Caver::GUIView *, const Caver::FWTouch *))v9)(v9, a2);
LABEL_51:
  if ( v18 )
  {
    v30 = *((_QWORD *)v18 + 1) - 1LL;
    *((_QWORD *)v18 + 1) = v30;
    if ( !v30 )
    {
      this = (Caver::GUIView *)(*(__int64 (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v18 + 16LL))(v18);
      v31 = *((_QWORD *)v18 + 2) - 1LL;
      *((_QWORD *)v18 + 2) = v31;
      if ( !v31 )
        return (Caver::GUIView *)(*(__int64 (__fastcall **)(const Caver::GUIView *))(*(_QWORD *)v18 + 24LL))(v18);
    }
  }
  return this;
}

