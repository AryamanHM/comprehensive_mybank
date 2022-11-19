var attendanceModule=angular.module("attendanceModule",[]);
attendanceModule.controller("attendanceTaker",function($scope)
{
							var students=[
								{
						name:"Aryaman",
							reg:1,
									roll:1,
									attendance:"p"
								
							}
							];
							$scope.students=students;
	$scope.id="0";
	$scope.getId=reg=>{id=reg;};
	$scope.getClass(reg)
	{
		id=reg;
	};
	$scope.getClass=reg=>
	{
		if(attendance="a")
		return id==reg?"absent":"false";
		else return id==reg?"present":"false";
	};
							});