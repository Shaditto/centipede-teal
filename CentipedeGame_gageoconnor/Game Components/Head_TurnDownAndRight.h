/* HeadMoveRightAndDown.h - Gage O'Connor, October 2017 */
#ifndef _HeadTurnDownAndRight
#define _HeadTurnDownAndRight

#include "Head_MoveState.h"

class HeadTurnDownAndRight : public  HeadMoveState
{
public:
	HeadTurnDownAndRight();
	std::vector<sf::Vector3f> GetMoveOffsets() const override { return offsets; }
	virtual const HeadMoveState* GetNextState(Centipede* chead) const override;
	virtual void Show() const override;

private:
	void grabOffsets();
	std::vector<sf::Vector3f> offsets;
};

#endif _HeadTurnDownAndRight