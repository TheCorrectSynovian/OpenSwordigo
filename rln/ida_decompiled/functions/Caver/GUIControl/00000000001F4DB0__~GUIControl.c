/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4DB0
 * Mangled: ._ZN5Caver10GUIControlD2Ev
 * Demangled: Caver::GUIControl::~GUIControl()
 *
 * Callers: 9
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x0000000000496510  Caver::GUIControl::~GUIControl()
 *   0x000000000049D6A4  Caver::GUISlider::~GUISlider()
 *   0x000000000049D874  Caver::GUISwitch::GUISwitch(void)
 *   0x000000000049E090  Caver::GUISwitch::~GUISwitch()
 *   0x00000000004B9320  Caver::GUITextFieldImpl::GUITextFieldImpl(void)
 *   0x00000000004B9748  Caver::GUITextFieldImpl::~GUITextFieldImpl()
 *   0x00000000004BA6CC  Caver::GUITextField::~GUITextField()
 *
 * Callees: 1
 *   0x0000000000496510  Caver::GUIControl::~GUIControl()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4DB8 string=0x00000000001F4DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIControl::~GUIControl(Caver::GUIControl *this)
{
  _ZN5Caver10GUIControlD2Ev(this);
}

