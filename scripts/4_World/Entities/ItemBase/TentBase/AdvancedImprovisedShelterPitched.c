class AdvancedImprovisedShelterPitched extends TentBase
{
	void AdvancedImprovisedShelterPitched();
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}
		return false;
	}
	
	override bool CanPutIntoHands(EntityAI parent)
	{
		if( !super.CanPutIntoHands( parent ) )
		{
			return false;
		}
		return false;
	}
};
