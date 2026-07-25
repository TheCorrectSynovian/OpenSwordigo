/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043B98C
 * Mangled: _ZN5Caver12SettingsViewD0Ev
 * Demangled: Caver::SettingsView::~SettingsView()
 *
 * Callers: 1
 *   0x000000000043AFBC  Caver::SettingsView::~SettingsView()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCF70  Caver::SettingsView::~SettingsView()
 *   0x000000000043B9C4  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::SettingsView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::SettingsView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000043B998 string=0x000000000043B99C "u"
 *   insn=0x000000000043B99C string=0x00000000001FCF70 "0'"
 *   insn=0x000000000043B9A8 string=0x000000000043B9AC "A"
 *   insn=0x000000000043B9AC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000043B9B4 string=0x000000000043B9B8 ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SettingsView::~SettingsView(Caver::SettingsView *this)
{
  Caver::SettingsView::~SettingsView(this);
  operator delete(this);
}

