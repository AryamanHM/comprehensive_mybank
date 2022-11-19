-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 13, 2020 at 10:45 AM
-- Server version: 10.4.13-MariaDB
-- PHP Version: 7.4.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `quiz3`
--

-- --------------------------------------------------------

--
-- Table structure for table `quiz`
--

CREATE TABLE `quiz` (
  `id` int(255) NOT NULL,
  `que` text NOT NULL,
  `option 1` varchar(222) NOT NULL,
  `option 2` varchar(222) NOT NULL,
  `option 3` varchar(222) NOT NULL,
  `option 4` varchar(222) NOT NULL,
  `ans` varchar(222) NOT NULL,
  `userans` text DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `quiz`
--

INSERT INTO `quiz` (`id`, `que`, `option 1`, `option 2`, `option 3`, `option 4`, `ans`, `userans`) VALUES
(1, 'Who was the founder of WCW?', 'Ted Turner', 'Eric Bischoff', 'Jim Cornette', 'Vince McMahon', 'Eric Bischoff', 'Ted Turner'),
(2, 'Who emerged as the winner and the new World Heavyweight Champion in the main event of WrestleMania 20? ', 'Triple H', 'Shawn Michaels', 'Goldberg', 'Chris Benoit', 'Chris Benoit', 'Chris Benoit'),
(3, 'The Montreal Screwjob which took place in the 1997 Survivor Series resulted in the exit of which veteran in the WWF?', 'Jim Neidhart', 'Owen Hart', 'British Bulldog', 'Bret Hart', 'Bret Hart', 'Bret Hart'),
(4, 'Which WrestleMania has the lowest attendance till date?', 'WrestleMania 16', 'WrestleMania 36', 'WrestleMania 22', 'WrestleMania 20', 'WrestleMania 36', 'WrestleMania 36'),
(5, 'Who has the most WrestleMania main events under his/her name?', 'John Cena', 'Hulk Hogan', 'Roman Reigns', 'Ronda Rousey', 'Hulk Hogan', 'John Cena'),
(6, 'Who was the inaugural WWE Money in the Bank Holder?', 'CM Punk', 'Rob Van Dam', 'Edge', 'Chris Jericho', 'Edge', 'Edge'),
(7, 'How Many Days Did Bruno Sammartino Hold The Title?', '2460 days', '4040 days', '3825 days', '5009 days', '4040 days', '3825 days'),
(8, 'Over How Many Years Did All Of Stone Cold\'s Title Reigns Occur?', '2', '3', '4', '5', '3', '4'),
(9, 'Randy Orton Shares The Same Number Of Reigns (13) With Which Superstar?', 'Shawn Michaels', 'Triple H', 'John Cena', 'Sheamus', 'Triple H', 'Triple H'),
(10, 'Who Did Vince McMahon Defeat To Capture The Title?', 'Shane McMahon', 'HHH', 'Kane', 'Mankind', 'HHH', 'HHH');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `quiz`
--
ALTER TABLE `quiz`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `option 1` (`option 1`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
