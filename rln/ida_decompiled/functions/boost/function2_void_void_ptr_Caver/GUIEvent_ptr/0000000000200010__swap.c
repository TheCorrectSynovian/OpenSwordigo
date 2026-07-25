/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200010
 * Mangled: ._ZN5boost9function2IvPvPN5Caver8GUIEventEE4swapERS5_
 * Demangled: boost::function2<void,void *,Caver::GUIEvent *>::swap(boost::function2<void,void *,Caver::GUIEvent *>&)
 *
 * Callers: 1
 *   0x00000000003759B4  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *
 * Callees: 1
 *   0x00000000003759B4  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200018 string=0x000000000020001C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::function2<void,void *,Caver::GUIEvent *>::swap()
{
  JUMPOUT(0x375ABC);
}

