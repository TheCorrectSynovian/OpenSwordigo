/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596510
 * Function: Caver::GUIControl::~GUIControl
 * Signature: undefined __thiscall ~GUIControl(GUIControl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIControl::~GUIControl() */

void __thiscall Caver::GUIControl::~GUIControl(GUIControl *this)

{
  GUIApplication *this_00;
  
                    /* try { // try from 0059651c to 0069652f has its CatchHandler @ 00596bfc */
  *(undefined **)this = PTR_vtable_007e6040 + 0x10;
  this_00 = (GUIApplication *)GUIApplication::sharedApplication();
  GUIApplication::CancelEventsWithSender(this_00,this);
  std::
  _Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,Caver::GUIControl::TargetAction>,std::_Select1st<std::pair<int_const,Caver::GUIControl::TargetAction>>,std::less<int>,std::allocator<std::pair<int_const,Caver::GUIControl::TargetAction>>>
              *)(this + 0xf0),*(_Rb_tree_node **)(this + 0x100));
                    /* try { // try from 00596550 to 0069655b has its CatchHandler @ 00596a2c */
  GUIView::~GUIView((GUIView *)this);
  return;
}


