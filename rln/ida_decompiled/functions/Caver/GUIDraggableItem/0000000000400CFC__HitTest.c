/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000400CFC
 * Mangled: _ZN5Caver16GUIDraggableItem7HitTestERKNS_7Vector2E
 * Demangled: Caver::GUIDraggableItem::HitTest(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000400CC4  Caver::DraggableMenuItem::~DraggableMenuItem()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GUIDraggableItem::HitTest(_QWORD *a1@<X8>)
{
  *a1 = 0;
  a1[1] = 0;
}

