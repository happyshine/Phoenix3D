// PX2UIItem.inl

//----------------------------------------------------------------------------
inline int UIItem::GetNumChildItem() const
{
	return mNumChildItem;
}
//----------------------------------------------------------------------------
inline bool UIItem::IsExpand() const
{
	return mIsExpand;
}
//----------------------------------------------------------------------------
inline int UIItem::GetNumAllChildsExpand() const
{
	return mNumAllChildExpand;
}
//----------------------------------------------------------------------------
inline UIItem::IconArrowState UIItem::GetIconArrowState() const
{
	return mIconArrowState;
}
//----------------------------------------------------------------------------
inline UIButton *UIItem::GetButBack()
{
	return mButBack;
}
//----------------------------------------------------------------------------
inline UIPicBox *UIItem::GetIconArrow0()
{
	return mIconArrow0;
}
//----------------------------------------------------------------------------
inline UIPicBox *UIItem::GetIconArrow1()
{
	return mIconArrow1;
}
//----------------------------------------------------------------------------
inline UIPicBox *UIItem::GetIcon()
{
	return mIcon;
}
//----------------------------------------------------------------------------
inline UIText *UIItem::GetText()
{
	return mText;
}
//----------------------------------------------------------------------------
inline int UIItem::_GetLevel() const
{
	return mLevel;
}
//----------------------------------------------------------------------------